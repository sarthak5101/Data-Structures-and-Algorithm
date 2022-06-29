#include<iostream>
using namespace std;

int linearSearch( int arr[], int n, int s) {

    for ( int i = 0; i < n; i++) {
        if ( arr[i] == s) 
            return s;
    }
    return -1;
}


int main() {

    int arr[] = { 60, 20, 15, 52, 30, 12, 10, 28, 1};
    int s = 30;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, s);

    cout << result << endl;

}