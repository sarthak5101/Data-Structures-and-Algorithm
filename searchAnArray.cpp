#include<iostream>
using namespace std;

bool isPresent (int arr[][4], int target, int row, int col) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            if (arr[row][col] == target)
                return true;
        }
    }
    return false;
}

int main() {
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 101;

    cout << isPresent(arr, target, 3, 4) << endl;
    return 0;
}