#include<bits/stdc++.h>
using namespace std;

int findPivot (vector<int>& nums) {
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        rightSum -= nums[i];
        if (leftSum == rightSum)
            return i;
        leftSum +=nums[i];
    }    
    return -1;
}

int main () {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << findPivot(nums) << " ";
    return 0;
}