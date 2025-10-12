#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> trees;
    long long max = 0;
    for (long long i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        if (temp > max){
            max = temp;
        }
        trees.push_back(temp);
    }
    long long start = 0;
    long long end = max - 1;
    while(start <= end){
        long long mid = (start+end)/2;
        long long take = 0;
        for (long long j = 0; j < n; j++){
            if (trees[j] > mid){
                take += trees[j]-mid;
            }
        }
        if (take < m){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << end;
    return 0;
}