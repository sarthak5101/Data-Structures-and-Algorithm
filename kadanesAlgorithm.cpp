#include<iostream>
#include<climits>
using namespace std;


// KADANE'S ALGORITHM

//INITIALIZE

/* 
max_so_far = INT_MIN
max_neding_here = 0

LOOP FOR EACH ELEMENT OF THE ARRAY

(A) max_ending_here = max_ending_here + a[i]
(B) if (max_so_far < max_ending_here)
        max_so_far = max_ending_here
(C) if (max_ending_here < 0)
        max_ending_here = 0
    return max_so_far
*/

int maxSubArray( int arr[], int size) {

    int max_so_far = INT_MIN, max_ending_here = 0;

    for ( int i = 0; i < size; i++) {

        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if ( max_ending_here < 0)
            max_ending_here = 0;

    }
    return max_so_far;

}

int main () {

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = maxSubArray( arr, n );
    cout << "Maximum contigous sum is " << max_sum;
    return 0;

}