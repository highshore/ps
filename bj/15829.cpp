#include<iostream>
#include<string>
using namespace std;

int main(){
    int l;
    string text;
    long long h = 0;
    long long r = 1;
    long long M = 1234567891;

    cin >> l;
    cin >> text;

    for (int i = 0; i < l; i++) {
        int base = text[i] - 'a' + 1;
        h = (h + base * r) % M;
        r = (r * 31) % M;
    }

    cout << h;

    return 0;
}