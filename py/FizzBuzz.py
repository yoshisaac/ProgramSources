
for i in range(1, 101):

    x = i

    if i%3 == 0 and i%5 == 0:
        x = "FizzBuzz"
    elif i%3 == 0:
        x = "Fizz"
    elif i%5 == 0:
        x = "Buzz"
    
    print(x)