#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string isbn;
    cin >> isbn;
    vector<int> weight = {1,3,1,3,1,3,1,3,1,3,1,3,1};
    int checksum = 0; 
    int masked = 0;
    for (int i = 0; i < isbn.length(); i++){
        if (isbn[i] != '*') {
            checksum += (isbn[i]-'0')*weight[i];
        }
        else{
            masked = i;
        }
    }
    for (int j = 0; j < 10; j++){
        if (((weight[masked]*j + checksum)%10) == 0) {
            cout << j;
            break;
        }
    }
    return 0;
}