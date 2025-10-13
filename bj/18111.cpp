#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m, b;
    cin >> n >> m >> b;
    int start = 256;
    int end = 0;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] < start){
                start = grid[i][j];
            }
            if (grid[i][j] > end){
                end = grid[i][j];
            }
        }
    }

    int height = 0;
    int min_time = 500*500*256*2;

    while(start <= end){
        int blocks = b;
        int time = 0;
        int for_stack = 0;
        int mid = (start + end)/2;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mid == grid[i][j]){
                    continue;
                }
                else if (mid > grid[i][j]){
                    int delta = mid - grid[i][j];
                    for_stack += 1;
                    time += delta;
                    blocks -= delta;
                }
                else {
                    int delta = grid[i][j] - mid;
                    time += 2*delta;
                    blocks += delta;
                }
            }
        }
        if (blocks < 0){
            end = mid - 1;
        }
        else {
            if (time < min_time){
                min_time = time;
                height = mid;
            }
            else if (time == min_time && mid > height){
                height = mid;
            }
            if (2*n*m < 3*for_stack){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    cout << min_time << " " << height;
    return 0;
}