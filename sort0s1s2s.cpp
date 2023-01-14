#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (low <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid++], arr[high--]);
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Output =  0 0 1 2 2