#include<bits/stdc++.h>
using namespace std;

void insertionSort (int n, vector<int>& arr) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for ( ; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
        } 
        arr[j + 1] = temp;
    }
}

void printArray (int n, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main () {
    vector<int> arr = {6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(n, arr);
    printArray(n, arr);
    return 0;
}