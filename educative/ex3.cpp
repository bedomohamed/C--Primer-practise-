/*
Problem Statement
Write a code in which you:

First, compute Squares of two Floating point variables a and b.
Then Add them after taking squares.
Now take Square Root of the answer.
​Use cmath library to compute the solution​.
Below is an illustration showing the formula you need to compute:


*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, sum, squareRoot;
    cin >> a;
    cin >> b;
    sum = pow(a, 2) + pow (b, 2);
    squareRoot = sqrt(sum);
    cout << "Answer is: " << squareRoot << endl;

    return 0;
}
