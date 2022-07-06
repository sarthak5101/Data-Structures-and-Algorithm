#include<iostream>
using namespace std;

bool isPalindrome(int N) {
    string str = "" + N;
    int len = str.length();
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

// Function to check if an array is PalinArray or not
bool isPalinArray(int arr[], int n) {
    //Traversing each element of the array and check if it is palindrome or not
    for (int i = 0; i < n; i++) {
        bool ans = isPalindrome(arr[i]);
        if (ans == false) 
            return false;
    }
    return true;
}

// Driver Code
int main () {
    int arr[] = { 121, 131, 20 };

    // Length of array
    int n = sizeof(arr)/sizeof(arr[0]);

    bool res = isPalinArray(arr, n);
    if (res == true)
        cout << "Array is a PalinArray";
    else 
        cout << "Array is not a PalinArray";
}