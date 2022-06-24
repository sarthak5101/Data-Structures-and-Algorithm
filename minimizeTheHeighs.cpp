#include<bits/stdc++.h>
using namespace std;

// USER FUNCTION TEMPLATE

int getMinDiff ( int arr[], int n, int k ) {

    sort(arr, arr + n);
    int ans = arr[ n - 1 ] - arr[0]; // MAXIMUM POSSIBLE HEIGHT DIFFERENCE

    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n-1];

    for ( int i = 1; i < n; i++ ) {
        if (arr[i] - k < 0) // IF ON SUBSTRACTING K WE GET NEGATIVE THEN CONTINUE
        continue;
        tempmin = min(arr[0] + k, arr[i] - k); // MINIMUM ELEMENT WHEN WE ADD K TO WHOLE ARRAY
        tempmax = max(arr[i-1] + k, arr[n-1]-k); // MAXIMUM ELEMENT WHEN WE SUBSTRACT K FROM WHOLE ARRAY
        ans = min(ans, tempmax - tempmin);
    } 
    return ans;

}

//DRIVER CODE
int main () {
    int k = 6, n = 6;
    int arr[n] = { 7,4,8,8,8,9 };
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}