#include <iostream>
using namespace std;

// Function to reverse an array from start to end

void reverseArray (int arr[], int start, int end) {

    while (start < end) {
        int value = arr[start];
        arr[start] = arr[end];
        arr[end] = value;
        start++;
        end--; 
    }

}

// Utility function to print an array

void printArray (int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;
}

// Driver functions to test other functions

int main () {

    int arr[] = {1, 4, 6, 8, 11, 15, 19, 25};

    int n = sizeof(arr)/sizeof(arr[0]);

    // To print original array
    printArray(arr, n);

    // Function calling
    reverseArray(arr, 0, n-1);

    cout << "Reversed array is " << endl;

    // To print the Reversed Array
    printArray(arr, n);

    return 0;

}



// LEETCODE SOLUTION



/*
 class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            
            // for strings of characters

            char value = s[left];
            s[left] = s[right];
            s[right] = value;
            left++;
            right--;
        }

    }
};
*/


// LEETCODE SOLUTION FOR REVERSING VOWELS IN A STRING



/*
class Solution {
public:
    bool isVowel (char ch) {
            return ch == 'a' || ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u' ||  ch == 'A' ||  ch == 'E' ||  ch == 'I' ||  ch == 'O' ||  ch == 'U';
}
    string reverseVowels(string s) {
                
        int low = 0;
        int high = s.size()-1;
        while (low <= high) {
            while (low < high && !isVowel(s[low])) {
                low++;
            }
        while (low < high && !isVowel(s[high])) {
            high--;
        }        
        // char value = s[low];
        // s[low] = s[high];
        // s[high] = value;        
        swap(s[low++],s[high--]);
        }
        return s;
    }

};
*/



// REVERSING THE WORDS IN A STRING


// // C++ program to reverse a string
// #include <bits/stdc++.h>
// using namespace std;

// // Function to reverse words*/
// void reverseWords(string s)
// {
	
// 	// temporary vector to store all words
// 	vector<string> tmp;
// 	string str = "";
// 	for (int i = 0; i < s.length(); i++)
// 	{
		
// 		// Check if we encounter space
// 		// push word(str) to vector
// 		// and make str NULL
// 		if (s[i] == ' ')
// 		{
// 			tmp.push_back(str);
// 			str = "";
// 		}

// 		// Else add character to
// 		// str to form current word
// 		else
// 			str += s[i];
// 	}

// 	// Last word remaining,add it to vector
// 	tmp.push_back(str);

// 	// Now print from last to first in vector
// 	int i;
// 	for (i = tmp.size() - 1; i > 0; i--)
// 		cout << tmp[i] << " ";
// 	// Last word remaining,print it
// 	cout << tmp[0] << endl;
// }

// // Driver Code
// int main()
// {
// 	string s = "i like this program very much";
// 	reverseWords(s);
// 	return 0;
// }
