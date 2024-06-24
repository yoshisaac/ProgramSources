import time as thread

x = 15

def prntChar(i):
    for NaN in range(0, i):
        print(" ", end="")

while True:
    for i in range(0, x):
        prntChar(i)
        print("Fuck Java")
        thread.sleep(0.1)

    for i in range(-x, 0):
        i = i * -1
        prntChar(i)
        print("Fuck Java")
        thread.sleep(0.1)