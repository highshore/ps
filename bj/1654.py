# import sys
# k, n = map(int, sys.stdin.readline().strip().split())
# chords = []
# for _ in range(k):
#     chords.append(int(sys.stdin.readline().strip()))
# s = max(chords)//int(n*max(chords)/sum(chords))
# for i in range(s, 0, -1):
#     pieces = [chord//i for chord in chords]
#     if sum(pieces) >= n:
#         print(i)
#         break

import sys
k, n = map(int, sys.stdin.readline().strip().split())
chords = []
for _ in range(k):
    chords.append(int(sys.stdin.readline().strip()))

start, end = 1, max(chords)
while start <= end:
    mid = (start + end)//2
    if sum([chords[i]//mid for i in range(k)]) >= n:
        start = mid + 1
    else:
        end = mid - 1
print(end)