#include<bits/stdc++.h>
using namespace std;

int flipBits (int *arr, int n) {

    int count = 0; 
    int maxCount = 0;
    int x = 0;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] == 0)
            count++;
        else {
            count--;
            x++;
        }
        maxCount = max(maxCount, count);

        if (count < 0)
            count = 0;
    }
    return maxCount + x;
}

int main () {
    int arr[] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = flipBits(arr, n);

    cout << ans << endl;
    return 0;
}