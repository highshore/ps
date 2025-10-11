// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int k, n;
//     cin >> k >> n;
//     vector<int> chords(k);
//     int max = 0;
//     for (int i = 0; i < k; i++){
//         cin >> chords[i];
//         if (chords[i] > max){
//             max = chords[i];
//         }
//     }
//     for (int j = max; j > 0; j--){
//         int sum = 0;
//         for (int x = 0; x < k; x++){
//             sum += chords[x]/j;
//         }
//         if (sum >= n){
//             cout << j;
//             break;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k, n;
    cin >> k >> n;
    vector<int> chords(k);
    long long max = 0;
    for (int i = 0; i < k; i++){
        cin >> chords[i];
        if (chords[i] > max){
            max = chords[i];
        }
    }
    long long start = 1;
    long long end = max;
    while (start <= end){
        long long mid = (start + end)/2;
        long long sum = 0;
        for (int j = 0; j < k; j++){
            sum += chords[j]/mid;
        }
        if (sum >= n){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << end;
    return 0;
}



// import sys
// k, n = map(int, sys.stdin.readline().strip().split())
// chords = []
// for _ in range(k):
//     chords.append(int(sys.stdin.readline().strip()))

// start, end = 1, max(chords)
// while start <= end:
//     mid = (start + end)//2
//     if sum([chords[i]//mid for i in range(k)]) >= n:
//         start = mid + 1
//     else:
//         end = mid - 1
// print(end)
