import sys, math
n = int(sys.stdin.readline().strip())
records = [0 for _ in range(n)]
for i in range(n):
    root_num = int(math.sqrt(i+1))
    if root_num**2 == i+1:
        records[i] = 1
    else:
        records[i] = min([records[i-j**2] for j in range(1, root_num + 1)]) + 1

print(records[-1])