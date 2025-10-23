import sys
n = int(sys.stdin.readline().strip())
requests = list(sys.stdin.readline().strip().split())
requests = [int(_) for _ in requests]
total_budget = int(sys.stdin.readline().strip())

max_sum = 0
threshold = 0

if sum(requests) <= total_budget:
    print(max(requests))
else:
    start = 1
    end = max(requests)
    while start <= end:
        temp = 0
        mid = (start + end)//2
        for request in requests:
            if request > mid:
                temp += mid
            else:
                temp += request
        if temp <= total_budget:
            if temp > max_sum:
                max_sum = temp
                threshold = mid
            start = mid + 1
        else:
            end = mid - 1
    print(threshold)
