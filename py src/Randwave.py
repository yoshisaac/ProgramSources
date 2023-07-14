import time as thread
import random as math

WaveForward = math.randint(0, 17)
WaveBack = 0

def prntChar(i):
    for NaN in range(0, i):
        print(" ", end="")

while True:
    for i in range(WaveBack, WaveForward):
        prntChar(i)
        print("*")
        thread.sleep(0.1)

    WaveBack = math.randint(0, WaveForward)

    for i in range(-WaveForward, -WaveBack):
        i = i * -1
        prntChar(i)
        print("*")
        thread.sleep(0.1)

    WaveForward = math.randint(WaveBack, 17)