#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n < 3) {
        cout << n << endl;
        return 0;
    }

    vector<int> fruits(n);
    for (int i = 0; i < n; ++i) {
        cin >> fruits[i];
    }

    int max_len = 0;
    int current_len = 0;
    int last_fruit = -1;
    int second_last_fruit = -1;
    int last_fruit_count = 0;

    for (int fruit : fruits) {
        if (fruit == last_fruit || fruit == second_last_fruit) {
            current_len++;
        }
        else {
            current_len = last_fruit_count + 1;
        }
        if (fruit == last_fruit) {
            last_fruit_count++;
        } else {
            second_last_fruit = last_fruit;
            last_fruit = fruit;
            last_fruit_count = 1;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    cout << max_len << endl;

    return 0;
}