#include<bits/stdc++.h>
using namespace std;

void bubbleSort (vector<int>& arr, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(vector<int> arr, int n) 
{  
    for (int i=0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main () {
    vector<int> arr = {46, 27, 12, 5, 33, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}