# Burgler_Alarm_Using_Arduino_Face_Detection_Machine_Learning

There are 2 alarm modes, one is Super Mario Theme song and other is Simple Alarm(Beep Beep Beep), which ever is more funny.

The alarm works as follows:

1) Run the .ino file( any one of the alarms) in Arduino. Push the code to the arduino board and then press ctrl+shiift+M to 
access the COM5(Arduino/Genuino) Window.

2) Then Run the python code, remember to install all dependencies first. pyautogui, opencv and numpy(auto installed with opencv so 
no worry)

3) The python code will open up a new window showing your face. It works on a harcascade classifier that was trained by team of
openCV. It is very light weight, so I used it, otherwise you can always use Cocoa Dataset with Spyder.
(refer https://github.com/tensorflow/models/tree/master/research/object_detection)

4) Now select the COM5 window. As soon as it detects a Face, the alarm will go off in a continuoum. Then you have to manually reset
alarm from the UNO board itself... 

NOTE: This works great because, it doesnot work like a motion detector. In motion detector a rat or a bug can put off the alarm, 
here it is not the case. Better the Dataset better the result. 

LIMITATION of this code: Harcascade Classifier/ detector is primitive in detecting faces. It doesnot detect faces tilted at an angle.
This is intentional because of the speed trade off it provides and can easily be run on RPi with finite memory demand.

Any Issues, Just place an issue and I'll try resolve it. 
