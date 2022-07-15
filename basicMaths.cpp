#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, sum, diff, div, mul, mod;
    cout << "Enter the value for a: ";
    cin >> a;

    cout << "Enter the value for b: ";
    cin >> b;

    sum = a + b;
    diff = a - b;
    div = a / b;
    mul = a * b;
    mod = a % b;

    cout << "The sum for above expressions are: " << sum << endl;
    cout << "The diff for above expressions are: " << diff << endl;
    cout << "The div for above expressions are: " << div << endl;
    cout << "The mul for above expressions are: " << mul << endl;
    cout << "The mod for above expressions are: " << mod << endl;

}
