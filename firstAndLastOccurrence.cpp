#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end) {
        if(arr[mid]==target) {
            ans=mid;
            end=mid-1;
        }
        else if(target > arr[mid]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end) {
        if(arr[mid]==target) {
            ans = mid;
            start=mid+1;
        }
        else if(target > arr[mid]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    int even[5]={1,2,3,3,5};
    cout << "First occurrence of 3 is at Index " << firstOccurrence(even, 5, 3) << endl;
    
    cout << "Last occurrence of 3 is at Index " << lastOccurrence(even, 5, 3) << endl;
       
    return 0;
}    
