#include<iostream>
using namespace std;

// MAXIMUM NUMBER IF DIGITS IN OUTPUT
#define MAX 500

int multiply(int x, int res[], int res_size);

//THIS FUNCTION FINDS FACTORIAL OF LARGE NUMBER AND PRINTS THEM
void factorial(int n) {
    int res[MAX];

    // INITIALIZE RESULT
    res[0] = 1;
    int res_size = 1;

    // APPLY SIMPLE FACTORIAL FORMULA n! = 1*2*3*4....*n
    for (int x = 2; x <=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for (int i = res_size-1; i >= 0; i--)
        cout << res[i];
}

/* THIS FUNCTION MULTIPLIES x WITH THE NUMBER REPRESENTED BY res[].
   res_size IS SIZE OF res[] OR NUMBER OF DIGITS IN THE NUMBER REPRESENTED
   BY res[]. THIS FUNCTION USES SIMPLE SCHOOL MATHEMATICS FOR MULTIPLICATION.
   THIS FUNCTION MAY VALUE OF res_size AND RETURNS THE NEW VALUE OF res_size.
*/
int multiply(int x, int res[], int res_size) {
    int carry = 0;  // INITIALIZE CARRY

    // ONE BY ONE MULTIPLY n WITH INDIVIDUAL DIGITS OF res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;

        // STORE LAST DIGIT OF 'PROD' IN res[]
        res[i] = prod % 10;

        // PUT REST IN CARRY
        carry = prod/10;
    }

    // PUT CARRY IN res AND INCREASE RESULT SIZE
    while (carry) {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

// DRIVER PROGRAM
int main() {
    factorial(3);
    return 0;
}