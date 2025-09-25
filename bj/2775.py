import sys

def tenants(level, room):
    if records[level][room] > 0:
        return records[level][room]
    sum = 0
    for i in range(1, room+1):
        sum += tenants(level-1, i)
    records[level][room] = sum
    return sum

t = int(sys.stdin.readline().strip())

for i in range(t):
    k = int(sys.stdin.readline().strip())
    n = int(sys.stdin.readline().strip())
    records = [[_ for _ in range(n+1)]] + [[0 for _ in range(n+1)] for _ in range(k)]
    print(tenants(k, n))
