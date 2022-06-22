#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int> & arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
        move(arr);
    for ( int e : arr)
        cout << e << " ";
    return 0;
}