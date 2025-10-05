#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    int n;
    cin >> n;
    vector<Point> records(n);

    for (int i = 0; i < n; i++){
        cin >> records[i].x >> records[i].y;
    }

    sort(records.begin(), records.end(), [](const Point a, const Point b) {
        if (a.y != b.y) {
            return a.y < b.y;
        }
        return a.x < b.x;
    });

    for (int i = 0; i < n; i++) {
        std::cout << records[i].x << " " << records[i].y << endl;
    }
    
    return 0;
}

// bool should_come_first(const Point a, const Point b){
//     if (a.y > b.y){
//         return true;
//     }
//     else if (a.x > b.x){
//         return true;
//     }
//     return false;
// }

// void merge(vector<Point> records, int left, int mid, int right){
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     vector<Point> L(n1);
//     vector<Point> R(n2);

//     // records left ~ mid 까지 L에 복사
//     for (int i = 0; i < n1; i++)
//         L[i] = records[left + i];

//     // records mid ~ right 까지 L에 복사
//     for (int j = 0; j < n2; j++)
//         R[j] = records[mid + 1 + j];

//     // L, R을 Merge
//     int i = 0; // L
//     int j = 0; // R
//     int k = left; // Records

//     // 하나씩 차례로 Merge
//     while (i < n1 && j < n2) {
//         if (should_come_first(L[i], R[j])) {
//             records[k] = L[i];
//             i++;
//         } else {
//             records[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     // L에서 남은 요소 붙이기
//     while (i < n1) {
//         records[k] = L[i];
//         i++;
//         k++;
//     }

//     // R에서 남은 요소 붙이기
//     while (j < n2) {
//         records[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(vector<Point> records, int left, int right) {
//     if (left >= right) {
//         return; // Base case: a single element is already sorted
//     }
//     // Find the middle point to divide the array
//     int mid = left + (right - left) / 2;

//     // Recursively sort the first and second halves
//     mergeSort(records, left, mid);
//     mergeSort(records, mid + 1, right);

//     // Merge the sorted halves
//     merge(records, left, mid, right);
// }


