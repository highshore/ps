import sys
l1 = sys.stdin.readline().strip()
l2 = sys.stdin.readline().strip()
l3 = sys.stdin.readline().strip()
number = 0

for i in [l1, l2, l3]:
    if number == 0 and ord(i[0]) >= ord('0') and ord(i[0]) <= ord('9'):
        number = int(i)
    elif number > 0:
        number += 1

if (number+1)%3 == 0:
    if (number+1)%5 == 0:
        print("FizzBuzz")
    else:
        print("Fizz")
else:
    if (number+1)%5 == 0:
        print("Buzz")
    else:
        print(number+1)