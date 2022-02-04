#https://stackify.dev/787134-python-ctypes-keyboard-event
#https://docs.microsoft.com/en-us/windows/win32/api/_inputdev/
#https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

#https://gist.github.com/Aniruddha-Tapas/1627257344780e5429b10bc92eb2f52a
#https://stackoverflow.com/questions/13564851/how-to-generate-keyboard-events

import serial, ctypes
from key import PressKey, ReleaseKey


keys ={
    'a':0x41,
    'b':0x42,
    'c':0x43,
    'd':0x44,
    'e':0x45,
    'f':0x46,
    'g':0x47,
    'h':0x48,
    'i':0x49,
    'j':0x4A,
    'k':0x4B,
    'l':0x4C,
    'm':0x4D,
    'n':0x4E,
    'o':0x4F,
    'p':0x50,
    'q':0x51,
    'r':0x52,
    's':0x53,
    't':0x54,
    'u':0x55,
    'v':0x56,
    'w':0x57,
    'x':0x58,
    'y':0x59,
    'z':0x5A}


arduino = serial.Serial('COM5', 9800, timeout=1)

while True:
    serialOutput = arduino.readline().decode()
    print(serialOutput == 'Q\r\n')


#arduino.close()


