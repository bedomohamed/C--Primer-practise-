/*
Write code for computing the formula

(a+b)^2
which expands into the following expression:
Write code for computing the formula

(a+b)^2
which expands into the following expression:
a^2 + 2ab + b^2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, aSquare,bSquare;
    cin >> a;
    cin >> b;
    aSquare = pow(a, 2);
    bSquare = pow(b, 2);
    cout << aSquare << " + " << 2 * a * b << " + " << bSquare << endl;
    return 0;
}
