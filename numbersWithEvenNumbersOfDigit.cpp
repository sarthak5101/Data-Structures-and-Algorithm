#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int output=0;
    int n=nums.size();
    for(int i=0; i<n; i++) {
        int count=0;
        while(nums[i]>0) {
            count++;
            nums[i]/=10;
        }
        if(count%2==0)
            output++;
    }
    return output;
}

int main() {
    vector<int> nums={12,345,2,6,7896};
    cout << findNumbers(nums) << "\n";
    return 0;
}