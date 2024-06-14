import time, math

i = 0.0
while True:
    for _ in range(0, int(100 * math.fabs(math.cos(i)))):
        print(" ", end="")

    print("*")

    i += 0.1
    
    time.sleep(0.1)
