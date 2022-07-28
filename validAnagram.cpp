#include<bits/stdc++.h>
using namespace std;

bool validAnagram (string s, string t) {

    int n1 = s.length();
    int n2 = t.length();

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (n1 != n2)
        return false;

    for (int i = 0; i < n2; i++) {
        if (s[i] != t[i])
            return false;
    }
    return true;
}

int main () {
    string s = "rat";
    string t = "car";

    cout << validAnagram(s, t);
    return 0;
}