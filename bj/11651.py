import sys
n = int(sys.stdin.readline().strip())
records = []

for i in range(n):
    x, y = map(int, sys.stdin.readline().strip().split())
    records.append([x,y])

sorted_records = sorted(records, key=lambda x:(x[1], x[0]))

for record in sorted_records:
    print(*record)