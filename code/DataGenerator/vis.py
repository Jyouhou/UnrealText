import matplotlib.pyplot as plt
import numpy as np
import cv2 as cv
import json
import pdb
from skimage.measure import block_reduce

def show(img):
    """
    :param img: ndarray (HxWx3)
    :return:
    """
    plt.imshow(img)
    plt.show()

def ShowImgAndAnnotation(img_path, texts, bboxes, diff, cboxes=None):
    """
    :param img_path: ndarray (HxWx3)
    :param texts: list(str)
    :param bboxes: list(ndarray (4x2)) counter-clockwise
    :param cboxes:  list(ndarray (4x2)) counter-clockwise
    :return:
    """
    img = cv.imread(img_path)
    img_ = img.copy()
    filtered_bbox = [box.astype(np.int) for box in bboxes if np.min(np.reshape(box, (-1,))) > 0]
    img = cv.drawContours(img, filtered_bbox, -1, (255, 0, 0), 3)
    if cboxes:
        filtered_cbox = [box.astype(np.int) for box in cboxes if np.min(np.reshape(box, (-1,))) > 0]
        img = cv.drawContours(img, filtered_cbox, -1, (0, 255, 0), 3)
    diff_box = np.array([bboxes[i] for i in range(len(diff)) if diff[i] == 1])
    img = cv.drawContours(img, diff_box, -1, (128, 128, 128), 3)
    show(img)

def verify(ID):
    img_path = f'./imgs/{ID}.jpg'
    label_path = f'./labels/{ID}.json'
    labels = json.load(open(label_path, 'r'))
    label = np.array(labels['bbox']).reshape((-1,4,2))
    diffs = labels['is_difficult']
    ShowImgAndAnnotation(img_path, None, label, diff=diffs)


if __name__ == '__main__':
    import PIL.Image as Image
    import numpy as np
    import random
    import sys

    for i in range(20):
        verify(random.randint(0, int(sys.argv[1])))
