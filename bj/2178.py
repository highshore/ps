import sys
n, m = map(int, sys.stdin.readline().strip().split())
maze = list()
for i in range(n):
    maze.append(sys.stdin.readline().strip())

depth = [[n*m for _ in range(m)] for _ in range(n)]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

need_visited = list()
need_visited.append((0, 0))
depth[0][0] = 1

while len(need_visited) > 0:
    x = need_visited[0][0]
    y = need_visited[0][1]
    for i in range(4):
        new_x = x+dx[i]
        new_y = y+dy[i]
        if new_y > -1 and x+dx[i] > -1 and new_y < n and new_x < m:
            if maze[new_y][new_x] == '1' and depth[new_y][new_x] > depth[y][x] + 1:
                depth[new_y][new_x] = depth[y][x] + 1
                need_visited.append((new_x, new_y)) 
    del need_visited[0]
    
print(depth[n-1][m-1])