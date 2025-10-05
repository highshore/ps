#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i = 0; i < n1; i++){
        L[i] = arr[left+i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = arr[mid+j+1];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while(i < n1 && j < n2){
        if(L[i] < R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
};

void merge_sort(vector<int>& arr, int left, int right){
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
};


int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << 0;
    }
    else{
        vector<int> reviews;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            reviews.push_back(temp);
        }
        merge_sort(reviews, 0, reviews.size() - 1);
        int exclude = round(0.15*n);
        int sum = 0;
        for (int j = exclude; j < n-exclude; j++){
            sum += reviews[j];
        }
        double avg = (double)sum/(n-2*exclude);
        cout << round(avg);
    }
    return 0;
}