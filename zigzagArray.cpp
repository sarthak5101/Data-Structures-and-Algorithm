#include<iostream>
using namespace std;

void zigZag(int arr[], int n) {

    // Flag indicates relation "<" is expected, else ">" is expected.
    // The first expected relation is "<".
    bool flag = true;
    for(int i=0; i<=n-2; i++) {
               
        if (flag) { // "<" RELATION EXPECTED

            // IF WE HAVE SITUATION LIKE A > B > C, WE GET A > C < B BY SWAPPING B AND C
            if (arr[i] > arr[i+1]) 
                swap(arr[i], arr[i+1]);
        }
            else { // ">" RELATION EXPECTED

                // IF WE HAVE A SITUATION LIKE A < B < C, WE GET A < C > B BY SWAPPING B AND C
                if (arr[i] < arr[i+1]) 
                    swap(arr[i], arr[i+1]);
            }
            flag = !flag; // FLIP FLAG
    }
}

// DRIVER PROGRAM
int main() {
    int arr[] = { 4, 3, 7, 8, 6, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    zigZag(arr, n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
