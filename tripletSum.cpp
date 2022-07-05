#include<iostream>
using namespace std;

// returns true if there is triplet with sum equal to 'sum' present in arr[]. Also prints the triplet 

bool tripleSum (int arr[], int arr_size, int sum) {
    // Fix the first element as arr[i]
    for (int i = 0; i < arr_size-2; i++) {
        // Fix the second element as arr[j]
        for (int j = 0; j < arr_size-1; j++) {
            // Fix the third element as arr[k]
            for (int k = 0; k < arr_size; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    cout << "Triplet is " << arr[i] << ", " << arr[j] << ", " << arr[k];
                    return true;
                }
            }
        }
    }
    // If we reach here then no triplet is found
    return false;
}

// Driver Code

int main () {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    tripleSum(arr, arr_size, sum);
    return 0;
}

