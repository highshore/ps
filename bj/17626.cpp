#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> records(n, 50000);
    for(int i = 0; i < n; i++){
        int root = sqrt(i+1);
        if (pow(root, 2) == (i+1)){
            records[i] = 1;
        }
        else{
            for (int j = 1; j < root + 1; j++){
                int temp = records[i-pow(j, 2)]+1;
                if(temp < records[i]){
                    records[i] = temp;
                }
            }
        }
    }
    cout << records[-1];
    return 0;
}