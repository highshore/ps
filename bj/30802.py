import sys
n = int(sys.stdin.readline().strip())
size = list(sys.stdin.readline().strip().split())
size = [int(_) for _ in size]
t, p = map(int, sys.stdin.readline().strip().split())

t_shirts = 0
for s in size:
    t_shirts += (t-1+s)//t

print(t_shirts)
print(n//p, n%p)