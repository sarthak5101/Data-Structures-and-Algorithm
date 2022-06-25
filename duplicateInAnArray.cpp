#include<bits/stdc++.h>
using namespace std;

int findDuplicate ( vector <int> & arr ) {

    int n = arr.size();
    sort (arr.begin(), arr.end());
    
    for ( int i = 0; i < n - 1; i++) {
        if ( arr[i] == arr[ i + 1 ]) {
            return arr[i];
        }
    }
    return 0;
}

int main () {

    vector<int> arr;

    arr = { 1, 3, 4, 2, 2 };
    cout << " The duplicate number is " << findDuplicate(arr) << endl;
 
}