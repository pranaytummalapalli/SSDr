import cv2

hand_cascade = cv2.CascadeClassifier('/home/kshitij/PycharmProjects/Hand_Rec/haarcascade_frontalcatface.xml')

cap = cv2.VideoCapture(0)

while True:
    ret, img = cap.read()

    #img = cv2.resize(img, (320, 240), interpolation=cv2.INTER_LINEAR)
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    hands = hand_cascade.detectMultiScale(gray,3,5)
    for (x, y, w, h) in hands:
        cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)
    cv2.imshow('10', img)
    cv2.waitKey(10)
