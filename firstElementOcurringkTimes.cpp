#include <bits/stdc++.h>
using namespace std;

int firstElementKTimes(int arr[], int n, int k)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] == k)
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[] = {1, 7, 4, 3, 4, 8, 7};
    int n = 7;
    int k = 2;

    cout << firstElementKTimes(arr, n, k);
    return -1;
}

// Output = 4