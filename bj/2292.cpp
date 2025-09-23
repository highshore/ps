#include<iostream>
using namespace std;
int main(){
    int n;
    int start = 1;
    int d = 1;
    cin >> n;
    while(true){
        if(n < start + 1){
            break;
        }
        else{
            start += 6*d;
            d += 1;
        }
    }
    cout << d;
    return 0;
}