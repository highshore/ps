#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    queue<pair<int,int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++){
        cin >> grid[i];
        for (int j = 0; j < m; j++){
            if (grid[i][j] == 'I'){
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    int answer = 0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!q.empty()){
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;
        for (int i = 0; i < 4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m){
                if(!visited[next_x][next_y] && grid[next_x][next_y] != 'X'){
                    visited[next_x][next_y] = true;
                    if (grid[next_x][next_y] == 'P') {
                        answer++;
                    }
                    q.push({next_x, next_y});
                }
            }
        }
    }

    answer > 0 ? cout << answer : cout << "TT";
    return 0;
}