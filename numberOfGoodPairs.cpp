#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs (vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == nums[j] && i < j) 
                ans++;
        }
    }
    return ans;
}

int main () {
    vector<int> arr = {1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << numIdenticalPairs(arr) << " ";
    return 0;
}