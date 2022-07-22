#include<bits/stdc++.h>
using namespace std;

string sortSentence (string s) {
    vector<string>pos(10, "");
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        string temp;
        while (!isdigit(s[j])) {
            temp.push_back(s[j]);
            j++;
        }
        pos[s[j] - '0'] = temp;
        i = j + 1;
    }
    string ans;
    for (int i = 1; i < 10; i++) {
        if (pos[i].length() > 0) {
            ans += pos[i];
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
}

int main () {
    string s = "is2 sentence4 This1 a3";

    cout << sortSentence(s) << endl;
    return 0;
}


