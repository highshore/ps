import sys
h, m = map(int, sys.stdin.readline().strip().split())

if m < 45:
    h = (h-1)%24
    m = m + 15
else:
    m -= 45

print(h, m)
    
