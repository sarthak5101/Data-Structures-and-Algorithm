#include<bits/stdc++.h>
using namespace std;

bool areNumbersAscending(string s) {
    int prev = 0, cur = 0;
    for (auto ch : s) {
        if (isdigit(ch))
            cur = cur * 10 + (ch - '0');
        else if (cur != 0) {
            if (prev >= cur)
                return false;
            prev = cur;
            cur = 0;
        }
    }
    return cur == 0 || prev < cur;
}

int main() {
    string s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    
    cout << areNumbersAscending(s) << endl;
    return 0;
}