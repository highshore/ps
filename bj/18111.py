import sys
n, m, b = map(int, sys.stdin.readline().strip().split())
grid = list()
for i in range(n):
    temp = list(sys.stdin.readline().strip().split())
    temp = [int(item) for item in temp]
    grid.append(temp)

start, end = min(min(grid)), max(max(grid))
min_time = 500*500*256*2 + 1
height = -1


while start <= end:
    # initialize number of blocks & consumed time in inventory
    blocks = b
    time = 0
    for_stack = 0 # number of delta > 0 to determine where to go next
    # set the target height and calculate the expected block inventory and time spent
    mid = (start + end)//2
    for row in grid:
        for point in row:
            if mid == point:
                pass
            elif mid > point:
                delta = mid-point
                for_stack += 1
                time += delta
                blocks -= delta
            else:
                delta = point-mid
                time += 2*delta
                blocks += delta
    # if inventory ran out, it means we set the target too high => next target should be lower
    if blocks < 0:
        end = mid - 1
    else:
        if time < min_time:
            min_time = time
            height = mid 
        elif time == min_time and mid > height:
            height = mid 
        # the time can be shortened by moving upwards unless,
        if 2*n*m < 3*for_stack:
            end = mid - 1
        else:
            start = mid + 1

print(min_time, height)