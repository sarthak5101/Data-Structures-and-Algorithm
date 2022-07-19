#include<bits/stdc++.h>
using namespace std;

bool checkString(string s) {
    return is_sorted(s.begin(), s.end());
}

int main() {
   string s = "aaabbb";
   cout << checkString(s) << endl;
}