#include<iostream>
using namespace std;

int binarySearch( int arr[], int s, int low, int high) {

    if ( high >= low) {
        int mid = low + (high - low) / 2;

    // IF FOUND IN MIDDLE, THEN RETURN IT 
    if (arr[mid] == s)
        return mid;

    // SEARCH THE LEFT HALF
    if (arr[mid] > s) 
        return binarySearch(arr, s, low, mid-1);

    // SEARCH THE RIGHT HALF
    return binarySearch(arr, s, mid+1, high);
    
    }
    return -1;
}

int main () {

    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int s = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, s, 0, n-1);

    if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);

}