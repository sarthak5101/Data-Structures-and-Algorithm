#include<bits/stdc++.h>
using namespace std;

string toUpperCase(string s) {
    transform(s.begin(), s.end(), s.begin(),::toupper);
    return s;
}

int main() {
    string s = "lovely";
    cout << toUpperCase(s) << endl;
}