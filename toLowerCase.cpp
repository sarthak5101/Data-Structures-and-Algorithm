#include<bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(),::tolower);
    return s;
}

int main() {
    string s = "LOVELY";
    cout << toLowerCase(s) << endl;
}