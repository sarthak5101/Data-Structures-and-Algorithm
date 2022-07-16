#include<bits/stdc++.h>
using namespace std;

string truncateSentence(string s, int k) {
    int count=0;
    string ans="";
    for(auto x:s) {
        if(x==' ')
            count++;
        if(count==k)
            break;
        ans+=x;
    }
    return ans;
}

int main() {
    string s = "Hello how are you Contestant";
    int k=4;

    cout << truncateSentence(s, k);
    return 0;
}