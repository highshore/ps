import sys
target = int(sys.stdin.readline().strip())

def split_sum(num):
    for n in range(1, num):
        n = str(n)
        sum = 0
        for i in range(len(n)):
            sum += int(n[i])
        sum += int(n)
        if sum == num:
            return n
    return 0

print(split_sum(target))