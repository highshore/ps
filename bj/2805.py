import sys
n, m = map(int, sys.stdin.readline().strip().split())
trees = list(sys.stdin.readline().strip().split())
trees = [int(tree) for tree in trees]
start = 0
end = max(trees)-1
while start <= end:
    mid = (start + end) // 2
    take = sum([trees[i]-mid if trees[i]-mid > 0 else 0 for i in range(n)])
    if take < m:
        end = mid - 1
    else:
        start = mid + 1
print(end)