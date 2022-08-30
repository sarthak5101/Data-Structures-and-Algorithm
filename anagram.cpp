#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string a, string b) {
    int n1 = a.length();
    int n2 = b.length();

    if (n1 != n2)
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n1; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "test";
    string str2 = "ttes";
 
    // Function Call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}