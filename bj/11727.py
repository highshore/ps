import sys
n = int(sys.stdin.readline().strip())
records = [1 for _ in range(n)]
records[1] = 3
for i in range(2, n):
    records[i] = (records[i-1] + 2*records[i-2])%10007
print(records[-1])