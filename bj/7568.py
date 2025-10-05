import sys
n = int(sys.stdin.readline().strip())
points = [1 for _ in range(n)]
records = []

for i in range(n):
    x, y = map(int, sys.stdin.readline().strip().split())
    records.append([x,y])

for j in range(n):
    for k in range(j+1, n):
        if records[j][0] > records[k][0] and records[j][1] > records[k][1]:
            points[k] += 1
        elif records[j][0] < records[k][0] and records[j][1] < records[k][1]:
            points[j] += 1

print(*points)