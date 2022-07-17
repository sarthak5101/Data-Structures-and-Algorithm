#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end) {
        if(arr[mid]==target) {
            return mid;
        }
        if(target>=arr[mid]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main() {
    int arr[7] = {2, 5, 9, 14, 16, 19, 25};
    int target=16;
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int index = binarySearch(arr, size, target);
    cout << index << endl;
    return 0;
}