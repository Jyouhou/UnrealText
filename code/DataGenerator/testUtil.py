import matplotlib.pyplot as plt
import numpy as np
import cv2 as cv
import pdb
from skimage.measure import block_reduce
import time

def show(img, text=''):
    """
    :param img: ndarray (HxWx3)
    :return:
    """
    plt.imshow(img)
    plt.title(text)
    plt.show()

def showBProposal(img_path, normal_bound, proposals):
    """
    :param img: ndarray(HxWx3)
    :param proposals: List(Proposal = UL_x, UL_y, BR_x, BR_y)
    :param ReduceRatio:
    :return:
    """
    # return
    img = cv.imread(img_path)
    img_ = img.copy().astype(np.float) * 0.5
    for proposal in proposals:
        img_[proposal[1]:proposal[3], proposal[0]:proposal[2]] += 100
    show(img, 'scene')
    show(normal_bound, 'normal_boundary')
    show(img_.astype(np.uint8), 'scene_with_text_regions_proposals')

def ShowImgAndAnnotation(img_path, texts, bboxes, cboxes):
    """
    :param img_path: ndarray (HxWx3)
    :param texts: list(str)
    :param bboxes: list(ndarray (4x2)) counter-clockwise
    :param cboxes:  list(ndarray (4x2)) counter-clockwise
    :return:
    """
    img = cv.imread(img_path)
    filtered_bbox = [box.astype(np.int).reshape(-1, 4, 2) for box in np.array(bboxes) if np.min(np.reshape(box, (-1,))) > 0]
    filtered_cbox = [box.astype(np.int).reshape(-1, 4, 2) for box in np.array(cboxes) if np.min(np.reshape(box, (-1,))) > 0]
    img = cv.drawContours(img, filtered_bbox, -1, (255, 0, 0), 3)
    img = cv.drawContours(img, filtered_cbox, -1, (0, 255, 0), 3)
    show(img, 'image_and_annotation')
    cv.imwrite(img_path.replace('.jpg', '_.jpg'), img)
