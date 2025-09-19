#include<iostream>
#include<vector>
using namespace std;

int main(){
    int direction = -1;
    vector<int> notes(8);

    for (int i = 0; i < 8; i++){
        cin >> notes[i];
    }

    for (int j = 0; j < 7; j++){
        if (j == 0){
            if (notes[j] < notes[j+1]){
                direction = 1;
            }
        }
        else{
            if ((notes[j+1]-notes[j])*direction < 0){
                direction = 0;
                break;
            }            
        }
    }

    if (direction == 1){
        cout << "ascending";
    }
    else if (direction == -1){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }

    return 0;
}