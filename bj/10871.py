import sys
n, x = map(int, sys.stdin.readline().strip().split())
a = list(sys.stdin.readline().strip().split())
a = [int(_) for _ in a]

for item in a:
    if item < x:
        print(item, end=" ")