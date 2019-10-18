import numpy as np
import cv2 as cv
import os

#def find_faces(image_path):
face_cascade = cv.CascadeClassifier('haarcascade_frontalface_alt.xml')
eye_cascade = cv.CascadeClassifier('haarcascade_eye_tree_eyeglasses.xml')
body_cascade= cv.CascadeClassifier('haarcascade_fullbody.xml')

img = cv.imread('crowd.jpg')
he=img.shape[0]
wi=img.shape[1]
img=cv.resize(img,(int(wi/he*800),800))
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
faces = face_cascade.detectMultiScale(gray, 1.1, 4)
body= body_cascade.detectMultiScale(gray,1.1, 4)

for (a,b,c,d) in body:
    cv.rectangle(img,(a,b),(a+c,b+d),(0,255,255),2)
cv.imshow('imag.jpg',img)
print('sucess')
cv.waitKey(0)
cv.destroyAllWindows()



