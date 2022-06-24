#include<bits/stdc++.h>
using namespace std;

int minJumps( int arr[], int n) {

    // BASE CASE: WHEN SOURCE AND DESTINATION ARE SAME
    
    if ( n == 1 ) 
        return 0;

    /* TRAVERSE THROUGH ALL THE POINTS REACHABLE FROM arr[1]
        RECURSIVELY, GET THE MINIMUM NUMBER OF JUMPS NEEDED TO REACH arr[h] FROM THESE REACHABLE POITNTS
    */
    
    int res = INT_MAX;
    for ( int i = n - 2; i >= 0; i-- ) {
        if ( i + arr[i] >= n - 1 ) {
        int sub_res = minJumps( arr, i + 1 );
        if ( sub_res != INT_MAX ) 
            res = min( res, sub_res + 1 );
        }   

    }

    return res;

}

//DRIVER CODE

int main () {

    int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };

    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << " Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;

}