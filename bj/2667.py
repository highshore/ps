import sys
n = int(sys.stdin.readline().strip())
grid = list()
for i in range(n):
    grid.append(sys.stdin.readline().strip())

visited = [[0 for _ in range(n)] for _ in range(n)]
blocks = 0
houses = list()

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

for i in range(n):
    for j in range(n):
        if grid[i][j] == '1' and visited[i][j] == 0:
            blocks += 1
            ### BFS START
            to_visit = [(j, i)]
            visited[i][j] = blocks
            house = 1
            while len(to_visit) > 0:
                x, y = to_visit[0][0], to_visit[0][1]
                for k in range(4):
                    if x+dx[k] > -1 and  n > x+dx[k] and y+dy[k] > -1 and n > y+dy[k]:
                        if grid[y+dy[k]][x+dx[k]] == '1' and visited[y+dy[k]][x+dx[k]] == 0:
                            to_visit.append((x+dx[k], y+dy[k]))
                            visited[y+dy[k]][x+dx[k]] = blocks
                            house += 1
                del to_visit[0]
            ### BFS END
            houses.append(house)

# for row in visited:
#     print(*row)

print(blocks)
houses.sort()
for house in houses:
    print(house)