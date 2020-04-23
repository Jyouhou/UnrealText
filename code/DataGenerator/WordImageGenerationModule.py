import os
import os.path as osp
import random
import tqdm
import pdb
import time
from PIL import Image, ImageDraw, ImageFont
import numpy as np
import cv2
import string
from fontTools.ttLib import TTFont
from fontTools.unicode import Unicode
import arabic_reshaper
from bidi.algorithm import get_display

arabic_alphabet = "غظضذخثتشرقصفعسنملكيطحزوهدجبأ"
size_arabic = len(arabic_alphabet)

font_paths = {
    "Arabic": "../../../resources/fonts&corpus/Arabic/fonts/",
    "English": "../../../resources/fonts&corpus/Latin/fonts/",
    "French": "../../../resources/fonts&corpus/Latin/fonts/",
    "Chinese": "../../../resources/fonts&corpus/Chinese/fonts/",
    "German": "../../../resources/fonts&corpus/Latin/fonts/",
    "Korean": "../../../resources/fonts&corpus/Korean/fonts/",
    "Japanese": "../../../resources/fonts&corpus/Japanese/fonts/",
    "Italian": "../../../resources/fonts&corpus/Latin/fonts/",
    "Bangla": "../../../resources/fonts&corpus/Bangla/fonts/",
    "Hindi": "../../../resources/fonts&corpus/Hindi/fonts/",
    "Latin": "../../../resources/fonts&corpus/Latin/fonts/"
}

corpus_paths = {
    "Arabic": "../../../resources/fonts&corpus/Arabic/corpus/corpus_ar.xml",
    "English": "../../../resources/fonts&corpus/Latin/corpus/English.txt",
    "French": "../../../resources/fonts&corpus/Latin/corpus/corpus_fr.xml",
    "Chinese": "../../../resources/fonts&corpus/Chinese/corpus/corpus_zh.xml",
    "German": "../../../resources/fonts&corpus/Latin/corpus/corpus_de.xml",
    "Korean": "../../../resources/fonts&corpus/Korean/corpus/corpus_ko.xml",
    "Japanese": "../../../resources/fonts&corpus/Japanese/corpus/corpus_ja.xml",
    "Italian": "../../../resources/fonts&corpus/Latin/corpus/corpus_it.xml",
    "Bangla": "../../../resources/fonts&corpus/Bangla/corpus/corpus_bn.xml",
    "Hindi": "../../../resources/fonts&corpus/Hindi/corpus/corpus_hi.xml",
    "Latin": "../../../resources/fonts&corpus/Latin/corpus/corpus_latin.xml"
}

SeparatedBySpace = {
    "Arabic": True, 
    "English": True, 
    "French": True, 
    "Chinese": False, 
    "German": True, 
    "Korean": False, 
    "Japanese": False, 
    "Italian": True, 
    "Bangla": True, 
    "Hindi": True, 
    "Latin": True
}

class WordRenderer(object):
    def __init__(self, *args, **kwargs):
        self.FontSize = kwargs.get('FontSize', [25, 128])
        self.Language = kwargs.get('Language', "English")
        self.FontRoots = [font_paths[self.Language]]
        self.CorpusPath = corpus_paths[self.Language]
        self.ContentPath = kwargs.get('ContentPath', '../../../resources/WordCrops')
        self.BackGroundPath = kwargs.get('BackGroundPath', '../../../resources/bg_img')
        self.SeparatedBySpace = SeparatedBySpace[self.Language]
        self.is_debug = kwargs.get('is_debug', False)
        self.is_Arabic = (self.Language == "Arabic")
        self.CurrentFont = None
        
        # Corpus
        self.Vocabulary = None
        self.CharSet = None
        self.Corpus = None
        self._LoadCorpus()
        
        # Fonts
        self.AvailableFontPaths = []
        print(f"Loading Fonts from: {self.FontRoots}")
        for FontRoot in self.FontRoots:
            self.AvailableFontPaths.extend(self._FindAllFonts(FontRoot, is_debug=kwargs.get('is_debug', True)))
        self._Filter_Font()
        
        # initialize an empty sticker for overlapping text
        self.empty_path = osp.join(self.ContentPath, f'empty.png')
        cv2.imwrite(self.empty_path, np.zeros((20,20,4), dtype=np.uint8))
        self._load_bgs()
    
    def _load_bgs(self):
        if self.BackGroundPath:
            self.img_names = [line.strip() for line in open(osp.join(self.BackGroundPath, 'imnames.cp'), 'r').readlines()]
        else:
            self.img_names = []

    def get_background(self,
                       Height,
                        Width,
                        SaveID=None):
        if self.BackGroundPath:
            while True:
                try:
                    random_img = cv2.imread(osp.join(self.BackGroundPath, random.choice(self.img_names)))
                    h, w, _ = random_img.shape
                    break
                except:
                    print('Error in loading backgrounds. retry...')
            if h < 1e-3 or Height < 1e-3:
                return ''
            aspect_ratio_img = w / h
            aspect_ratio_target = Width / Height
            if aspect_ratio_img > aspect_ratio_target:
                max_height = h
                max_weight = aspect_ratio_target * h
            else:
                max_weight = w
                max_height = w / aspect_ratio_target

            random_crop_ratio = random.uniform(0.5, 1.0)
            target_h = int(max_height * random_crop_ratio)
            target_w = int(max_weight * random_crop_ratio)
            ul_crop_x = random.randint(0, w - target_w)
            ul_crop_y = random.randint(0, h - target_h)

            cropped = random_img[ul_crop_y:ul_crop_y+target_h,
                                ul_crop_x:ul_crop_x+target_w]
            path = osp.join(self.ContentPath, f'BG-{SaveID}.png')
            cv2.imwrite(path, cropped)

            return path
        else:
            return ""
    
    def RenderStraightTextLine(self, MaximumWidth, SpacingFactor=0.0):
        try:
            texts = []
            text_joint = ''
            MaxiWidthExpanded = int(MaximumWidth * 1.0)
            while True:
                # add one text
                word = self._LoadWord()
                if len(word) > 6:
                    word = word.replace('.', '').replace(',', '')
                texts.append(word)
                if text_joint:
                    p = random.random()
                    if p < 0.05:
                        spacing = '   '
                    elif p < 0.10:
                        spacing = '  '
                    else:
                        spacing = ' '
                    text_joint += spacing + texts[-1].strip()
                else:
                    text_joint = texts[-1].strip()
                
                w, h = self.CurrentFont.getsize(text_joint)
                if w > MaxiWidthExpanded:
                    exceeded = min(max(int((w - MaxiWidthExpanded) / w * len(text_joint)), 1), len(texts[-1]))
                    text_joint = text_joint[:-exceeded].strip()
                    texts[-1] = texts[-1][:-exceeded]
                    if len(texts[-1]) == 0:
                        texts = texts[:-1]
                    w, h = self.CurrentFont.getsize(text_joint)
                    break

                if (len(texts) > 0 and random.random() < 0.05) or (len(texts) > 5):
                    break

            CharImage = Image.new('RGBA', (w, h), (0, 0, 0, 0))
            draw = ImageDraw.Draw(CharImage)
            if self.is_Arabic:
                draw.text_alignment = 'right'
                draw.text_antialias = True
                draw.text_kerning = 0.0
            draw.text((0, 0),
                      text_joint,
                      fill='white',
                      font=self.CurrentFont)
            CharImg = np.asarray(CharImage).copy()

            bbox = []
            cbox = []
            lens = [0]
            text_joint += '   '
        except:
            return self.RenderStraightTextLine(MaximumWidth)
        
        # obtain char/word boxes
        try:
            CharLocFaild = False
            for charCount in range(len(text_joint)):
                lens.append(self.CurrentFont.getsize(text_joint[:charCount+1])[0])

                if text_joint[charCount] != ' ':
                    Ys, Xs = np.nonzero(CharImg[:, lens[-2]:lens[-1], 0])
                    if Ys.shape[0] == 0 or Xs.shape[0] == 0:
                        CharLocFaild = True
                        break
                    XMin = np.min(Xs)+lens[-2]
                    XMax = np.max(Xs)+lens[-2]
                    YMin = np.min(Ys)
                    YMax = np.max(Ys)
                    # UL(X, Y), BR(X, Y)
                    cbox.append([XMin, YMin, XMax, YMax])
            if not CharLocFaild:
                cbox = np.array(cbox)
                if cbox.shape[0] == 0:
                    bbox = np.array(bbox)
                else:
                    CharCount = 0
                    for word in texts:
                        wordChar = cbox[CharCount:CharCount+len(word)]
                        bbox.append([np.min(wordChar[:, 0]),
                                     np.min(wordChar[:, 1]),
                                     np.max(wordChar[:, 2]),
                                     np.max(wordChar[:, 3])])
                        CharCount += len(word)
                    bbox = np.array(bbox)
            else:
                bbox = []
                lens = [0]
                for charCount in range(len(text_joint)):
                    if charCount == len(text_joint)-1 or (text_joint[charCount] != ' ' and text_joint[charCount+1] == ' '):
                        lens.append(self.CurrentFont.getsize(text_joint[:charCount + 1])[0])
                        Ys, Xs = np.nonzero(CharImg[:, lens[-2]:lens[-1], 0])
                        XMin = np.min(Xs)+lens[-2]
                        XMax = np.max(Xs)+lens[-2]
                        YMin = np.min(Ys)
                        YMax = np.max(Ys)
                        bbox.append([XMin, YMin, XMax, YMax])
                bbox = np.array(bbox)
                cbox = np.array([[0, 0, 0, 0]] * sum(len(text) for text in texts))
            
        except:
            return None, None, None, None, None

        # cbox: ndarray, n*4
        # bbox: ndarray, n*4
        if self.is_Arabic:
            texts = [word[::-1] for word in texts] # the annotation for arabic word is from right to left

        return CharImg, texts, text_joint, cbox, bbox
    
    def getFontSize(self, Width, Height):
        maximum_row = int(Height / self.FontSize[0])
        row_num = int(np.random.uniform(1, min(max([maximum_row, 1]), 10)))
        current_max = min(int(self.FontSize[1] * (random.random() * 0.8 + 0.25)), int(Width / 4))
        FontSize = max(int(min(Width, Height / row_num, current_max)), self.FontSize[0])
        return FontSize

    def RenderWordImage(self,
                        Height,
                        Width,
                        WordColor=(255, 255, 255, 255),
                        SaveID=None):
        """
        While True:
            img0 = render single word
            imgs.append(img0)
            if ar < target ar: break
            if random.random() < 0.2 break
        pad
        output
        :param Height:
        :param Width:
        :param WordColor:
        :return: Img[HxWx4], Texts(List[str]), CBOX[nx4x2], BBOX[nx4x2] (N_box, corner, x/y)
        """
        FontSize = self.getFontSize(Height, Width)
        if FontSize > min(Height, Width):
            FontSize //= 2
        self._RandomLoadFont(FontSize)
        TextCrops = []
        CurrentHeight = 0
        MaxWidth = 0
        while True:
            CharImg, texts, text_joint, cbox, bbox = self.RenderStraightTextLine(Width, SpacingFactor=np.random.uniform(0, 0.4))
            if CharImg is None:
                FontSize = self.getFontSize(Height, Width)
                self._RandomLoadFont(FontSize)
                continue
            TextCrops.append([CharImg, texts, text_joint, cbox, bbox])
            try:
                CurrentHeight += CharImg.shape[0]
            except:
               TextCrops = TextCrops[:-1]
               continue
            MaxWidth = max(MaxWidth, CharImg.shape[1])
            if CurrentHeight > Height * 1.2 and len(TextCrops) > 1:
                CurrentHeight -= TextCrops[-1][0].shape[0]
                TextCrops = TextCrops[:-1]
                break
            if CurrentHeight > Height:
                break
            if len(TextCrops) > 5: 
                break

        Color = np.array([[[WordColor[0],
                            WordColor[1],
                            WordColor[2],
                            WordColor[3]]]], dtype=np.uint8)

        Img = np.zeros(shape=[max(CurrentHeight, int(random.uniform(1.0, 1.05) * Height)), max(MaxWidth, Width), 4], dtype=np.uint8)
        Texts = []
        BBOX = []
        CBOX = []
        currentheight = 0
        try:
            H, W, _ = Img.shape
            for CharImg, texts, text_joint, cbox, bbox in TextCrops:
                h, w, _ = CharImg.shape
                left_pad = random.randint(0, W-w)
                if currentheight+h > H: break
                Img[currentheight:currentheight+h, left_pad:w+left_pad] = CharImg
                Texts += texts
                bbox[:, ::2] += left_pad
                cbox[:, ::2] += left_pad
                BBOX.append(bbox)
                CBOX.append(cbox)
                BBOX[-1][:, 1::2] += currentheight
                CBOX[-1][:, 1::2] += currentheight
                if random.random() < 0.5:
                    currentheight += int(h * random.uniform(1.0, 1.5))
                else:
                    currentheight += h
            BBOX = np.concatenate(BBOX, axis=0)
            CBOX = np.concatenate(CBOX, axis=0)
        except:
            pdb.set_trace()
        
        if random.random() < 0.5:
            Color = Color * np.random.uniform(0.85, 1.0, size=Img.shape)
        Img = (Img / 255 * Color).astype(np.uint8)
        CBOX = np.reshape(np.stack([CBOX[:, 0], CBOX[:, 1], CBOX[:, 2], CBOX[:, 1], CBOX[:, 2], CBOX[:, 3], CBOX[:, 0], CBOX[:, 3]], axis=-1), newshape=[-1, 4, 2])
        BBOX = np.reshape(np.stack([BBOX[:, 0], BBOX[:, 1], BBOX[:, 2], BBOX[:, 1], BBOX[:, 2], BBOX[:, 3], BBOX[:, 0], BBOX[:, 3]], axis=-1), newshape=[-1, 4, 2])

        if SaveID is not None:
            path = osp.join(self.ContentPath, f'word-{SaveID}.png')
            cv2.imwrite(path, Img)
            H, W, _ = Img.shape
            CBOX = CBOX.astype(np.float)
            BBOX = BBOX.astype(np.float)
            CBOX[:, :, 0] /= W
            CBOX[:, :, 1] /= H
            BBOX[:, :, 0] /= W
            BBOX[:, :, 1] /= H
            return path, Texts, CBOX, BBOX, W, H

        return Img, Texts, CBOX, BBOX

    # functions
    # search for all fonts
    def _FindAllFonts(self, RootPath, is_debug=True):
        result = []
        contents = os.listdir(RootPath)
        if is_debug:
            random.shuffle(contents)
        for content in contents:
            path = osp.join(RootPath, content)
            if osp.isfile(path):
                if path.endswith('.ttf'):
                    result.append(path)
            elif osp.isdir(path):
                result.extend(self._FindAllFonts(path, is_debug=is_debug))
            if is_debug and len(result)>200: break
        return result
    # filter out unavailable fonts
    def _Filter_Font(self):
        Filtered =[]
        print('Start to filter out unavailable fonts.')
        for fontpath in tqdm.tqdm(self.AvailableFontPaths):
            flag = True
            for i in range(5):
                flag = flag and self._CheckFont(fontpath, self._LoadChar())
            if flag:
                Filtered.append(fontpath)
        self.AvailableFontPaths = Filtered
        print(f'Found {len(self.AvailableFontPaths)} valid fonts.')
    
    def _CheckFont(self, font_path, glyph):
        font = TTFont(font_path)
        for table in font['cmap'].tables:
             if ord(glyph) in table.cmap.keys():
                 return True
        return False

    def _LoadFont(self, path, fontsize=None):
        if fontsize is not None:
            FontSize = fontsize
        else:
            assert type(self.FontSize) == list and len(self.FontSize) == 2
            FontSize = int(np.random.uniform(self.FontSize[0], self.FontSize[1]))
        self.CurrentFont = ImageFont.truetype(path, FontSize)

    def _RandomLoadFont(self, FontSize):
        fontpath = random.choice(self.AvailableFontPaths)
        self._LoadFont(fontpath, FontSize)
        if self.is_debug:
            print(fontpath)

    # Corps Functions
    def _LoadCorpus(self):
        print(f"Loading corpus from: {self.CorpusPath}")
        if self.SeparatedBySpace:
            lines = [line for line in open(self.CorpusPath, 'r').readlines() if line.find("doc id=") < 0 ]
            Corpus = ' '.join(lines)
            Tokens = set(Corpus.split())
            self.Vocabulary = [token.replace('\n', '') for token in Tokens]
            if self.is_Arabic:
                self.Vocabulary = [word for word in self.Vocabulary if len(set(word+arabic_alphabet))==size_arabic]
            self.CharSet = set(''.join(self.Vocabulary))
            print(f"voc size={len(self.Vocabulary)}")
        else:
            lines = [line for line in open(self.CorpusPath, 'r').readlines() if line.find("doc id=") < 0 ]
            random.shuffle(lines)
            line_num = len(lines)
            lines = lines[:line_num // 3]
            
            self.Corpus = ''.join(lines).replace('\n', '').replace(' ', '')
            if self.CorpusPath.find('corpus_zh') >= 0:
                from hanziconv import HanziConv
                self.Corpus = HanziConv.toSimplified(self.Corpus)
                print("Transformed to simplified Chinese")
            self.Vocabulary = None
            self.CharSet = set(self.Corpus)
            print(f"char count={len(self.CharSet)}")

    def _LoadWord(self):
        if self.SeparatedBySpace:
            word = random.choice(self.Vocabulary)
            if len(word) > 12 and random.random() < 0.2:
                word = word[:-5]
            # return word
        else:
            Len = random.randint(3, 10)
            start = random.randint(0, len(self.Corpus) - Len)
            word = self.Corpus[start: start+Len]
            # return word
        if self.is_Arabic:
            reshaped_text = arabic_reshaper.reshape(word) 
            bidi_text = get_display(reshaped_text)
            return bidi_text
        else:
            p = random.random() 
            if p < 0.25:
                return word
            elif p < 0.5:
                return word.lower() 
            else:
                return word.upper()
    
    def _LoadChar(self):
        if self.SeparatedBySpace:
            word = random.choice(self.Vocabulary)
            if len(word) > 12 and random.random() < 0.2:
                word = word[:-5]
        else:
            Len = random.randint(3, 20)
            start = random.randint(0, len(self.Corpus) - Len)
            word = self.Corpus[start: start+Len]
        return word[0]


if __name__ == '__main__':
    # testing: 
    Renderer = WordRenderer(is_debug=True, Language="Arabic")
    for i in (range(40)):
        print(f"{i}--------")
        # Img[HxWx4], Texts(List[str]), CBOX[nx4x2], BBOX[nx4x2] (N_box, corner, x/y)
        img, texts, cbox, bbox = Renderer.RenderWordImage(200, 500, (30, 30, 30, 240))
        print(texts)
        # print(img.shape)

        # visualize boxes
        img_b = img.copy()
        for box in bbox:
            img_b[box[0, 1]:box[1, 1] + 2, box[0, 0]:box[1, 0] + 2] = [255, 0, 0, 255]
            img_b[box[2, 1]:box[3, 1] + 2, box[3, 0]:box[2, 0] + 2] = [0, 255, 0, 255]
            img_b[box[0, 1]:box[3, 1] + 2, box[0, 0]:box[3, 0] + 2] = [255, 0, 255, 255]
            img_b[box[1, 1]:box[2, 1] + 2, box[1, 0]:box[2, 0] + 2] = [0, 255, 255, 255]
        img_c = img.copy()
        for box in cbox:
            if np.sum(box) < 1:
                continue
            img_c[box[0, 1]:box[1, 1] + 2, box[0, 0]:box[1, 0] + 2] = [255, 0, 0, 255]
            img_c[box[2, 1]:box[3, 1] + 2, box[3, 0]:box[2, 0] + 2] = [0, 255, 0, 255]
            img_c[box[0, 1]:box[3, 1] + 2, box[0, 0]:box[3, 0] + 2] = [255, 0, 255, 255]
            img_c[box[1, 1]:box[2, 1] + 2, box[1, 0]:box[2, 0] + 2] = [0, 255, 255, 255]
        img = np.concatenate([img_b, img_c, img], axis=0)
        # print(f'----- ----- ----- ----- ----- {i}')
        # print(texts)
        # print(np.mean(img[:, :, 3]))
        # img[:, :, 3] //= 2
        # cv2.imwrite(f'../../WordCrops/sample-{i%80}.png', img)
