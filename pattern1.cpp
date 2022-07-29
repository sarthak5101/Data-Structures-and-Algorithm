#include<iostream>
using namespace std;

int main () {
    int row;
    cout << "Enter the number of rows : " << " ";
    cin >> row;

    int col;
    cout << "Enter the number of columns : " << " ";
    cin >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << " *";
        }
        cout << "\n";
    }

    return 0;
}