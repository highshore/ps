#include<iostream>
#include<vector>
using namespace std;

int tenants(int level, int room, vector<vector<int>>& matrix){
    if (matrix[level][room] > 0) {
        return matrix[level][room];
    }
    int sum = 0;
    for (int i=1; i < room+1; i++){
        sum += tenants(level-1, i, matrix);
    }
    matrix[level][room] = sum;
    return sum;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int k, n;
        cin >> k;
        cin >> n;
        vector<vector<int>> records(k+1, vector<int>(n+1, 0));
        for (int j = 1; j < n+1; j++){
            records[0][j] = j;
        }
        cout << tenants(k, n, records) << endl;
    }
    return 0;
}