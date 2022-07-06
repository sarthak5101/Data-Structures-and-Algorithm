#include<iostream>
using namespace std;

// Utitlity function to find the minimum swaps required to club all elements less than or equal to k together
int minSwap(int *arr, int n, int k) {
    // Find count of elements which are less than equal to k
    int count = 0;
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k)
            ++count;

    // Find unwanted elements in current window of size 'count'
    int bad = 0;
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k)
            ++bad;

    // Initialize answer with 'bad' value of current window
    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j) {
        // Decrement count of previous window
        if (arr[i] > k)
            --bad;

        // Increment count of current window
        if (arr[j] > k)
            ++bad;

        // Update ans if the count of 'bad' is less than in current window
        ans = min(ans, bad);
    }
    return ans;
}

// Driver Code

int main() {
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout << minSwap(arr, n, k) << "\n";

    int arr1[] = {2, 7, 9, 5, 8, 7, 4};
    n = sizeof(arr1)/sizeof(arr1[0]);
    k = 5;
    cout << minSwap(arr1, n, k);
    return 0; 
}