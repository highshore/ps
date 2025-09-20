#include<iostream>
#include <string>
using namespace std;
int main(){
    int t, h, w, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> h >> w >> n;
        string front = to_string((n-1)%h+1);
        string back = int((n-1)/h)+1 < 10 ? "0" + to_string(int((n-1)/h)+1) : to_string(int((n-1)/h)+1);
        cout << front << back << endl;
    }
    return 0;
}