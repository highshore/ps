#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> points(n, 1);
    vector<vector<int>> records;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        records.push_back({x, y});
    }
    for (int j = 0; j < n; j++){
        for (int k = 0; k < n; k++){
            if (records[j][0] > records[k][0] && records[j][1] > records[k][1]){
                points[k] += 1;
            }
            else if (records[j][0] > records[k][0] && records[j][1] > records[k][1]){
                points[j] += 1;
            }
        }
    }
    for (int num:points){
        cout << num << " ";
    }
    return 0;
}