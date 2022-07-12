#include<bits\stdc++.h>
using namespace std;

// FUNCTION TO REVERSE EVERY SUB-ARRAY FORMED BY CONSECUTIVE ELEMENTS
void reverse(int arr[], int k, int n) {
    for(int i=0; i<n; i+=k) {
        int left = i;

        // TO HANDLE CASE WHEN K IS NOT MULTIPLE OF N
        int right = min(i + k - 1, n - 1);

        // REVERSE THE SUB-ARRAY [LEFT, RIGHT]
        while(left < right)
            swap(arr[left++], arr[right--]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, n, k);

    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";

    return 0;
}