#include<bits/stdc++.h>
using namespace std;

void merge( int arr1[], int arr2[], int m, int n) {

    // Iterate through all elements of arr2[] starting from the last element
    for ( int i = n - 1; i >= 0; i-- ) {
        /* Find the smallest element greater than arr2[i] .
        Move all elements one position ahead till the smallest greater element is not found */
        int j, last = arr1 [ m- 1 ];
        for (j = m - 2 ; j >= 0 && arr1[j] > arr2[i]; j--)
            arr1[j+1] = arr1[j]; 

        // If there was a greater element
        if ( j != m - 2 || last > arr2[i]) {
            arr1[ j + 1 ] = arr2[i];
            arr2[i] = last;
        }
    }

}


// Driver program

int main () {

    int arr1[] = { 1, 5, 9, 10, 15, 20 };
    int arr2[] = { 2, 3, 8, 13 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    merge( arr1, arr2, m, n);

    cout << " After merging nFirst Array: ";
    for ( int i = 0; i < m; i++) 
        cout << arr1[i] << " ";
        cout << endl;
    cout << " nSecond Array: ";
    for ( int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    return 0;

}