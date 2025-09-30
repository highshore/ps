#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    int num = 665;
    cin >> n;

    while (n) {
        num += 1;
        if (to_string(num).find("666") != std::string::npos){
            n -= 1;
        }
    }
    cout << num;
    return 0;
}