#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> records(n, 1);
    records[1] = 3;
    for (int i = 2; i < n; i++){
        records[i] = (records[i-1] + 2*records[i-2]) % 10007;
    }
    cout << records[n-1];
    return 0;
}