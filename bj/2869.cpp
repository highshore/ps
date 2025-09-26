#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int a, b, v;
    cin >> a >> b >> v;
    cout << (long long int) ceil((double)(v-a)/(a-b)) + 1;
    return 0;
}