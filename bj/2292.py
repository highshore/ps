import sys
n = int(sys.stdin.readline().strip())

def path_num(num):
    start = 1
    d = 1
    while True:
        if num < start + 1:
            return d
        else:
            start += 6*d
            d += 1

print(path_num(n))