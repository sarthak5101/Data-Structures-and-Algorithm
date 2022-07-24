#include<bits/stdc++.h>
using namespace std;

void selectionSort (vector<int>& arr, int n) {
    
    for (int i = 0; i < n; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap (arr[minIndex], arr[i]);
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
    int n = sizeof(arr) / sizeof (arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
    
}