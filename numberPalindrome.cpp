#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
    if(x < 0)
        return false;

    int num=x, rev=0, rem=0;

    while(x !=0 ) {
        rem = x%10;
        rev = rev*10 + rem;
        x /= 10;
    }

    if (num == rev)
        return true;
    else
        return false;
}

int main()
{
    int x = 1331;

    cout << isPalindrome(x);

    return 0;
}