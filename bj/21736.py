import sys

n, m = map(int, sys.stdin.readline().strip().split())
grid = [[None for _ in range(m)] for _ in range(n)]
q = list()
answer = 0

def bfs(x, y, answer):
    if x > 0:
        if grid[x-1][y] != 'X':
            q.append((x-1, y))
            if grid[x-1][y] == 'P':
                answer += 1
            grid[x-1][y] = 'X'
    
    if x < n-1:
        if grid[x+1][y] != 'X':
            q.append((x+1, y))
            if grid[x+1][y] == 'P':
                answer += 1
            grid[x+1][y] = 'X'
    
    if y > 0:
        if grid[x][y-1] != 'X':
            q.append((x, y-1))
            if grid[x][y-1] == 'P':
                answer += 1
            grid[x][y-1] = 'X'
        
    if y < m-1:
        if grid[x][y+1] != 'X':
            q.append((x, y+1))
            if grid[x][y+1] == 'P':
                answer += 1
            grid[x][y+1] = 'X'
    
    return answer

for i in range(n):
    temp = sys.stdin.readline().strip()
    for j in range(m):
        if temp[j] == 'I':
            q.append((i, j))
        grid[i][j]=temp[j]
        
while len(q):
    answer = bfs(q[0][0], q[0][1], answer)
    del q[0]

print(answer) if answer > 0 else print("TT")