import sys
l = int(sys.stdin.readline().strip())
text = sys.stdin.readline().strip()
h = 0
for i in range(l):
    h += (ord(text[i])-96)*(31**i)
print(h%1234567891)