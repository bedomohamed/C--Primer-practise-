/*
Problem Statement
Declare an integer type variable name intNumber and assign it a value of 30.
Declare a float type variable name floatNumber and assign it a value of 30.78.
Declare a double type variable name doubleNumber and assign it a value of 45.1234.
Declare a bool type variable name boolean and assign it a value of true.
Declare a char type variable name charName and assign it a value of u.
Lastly, print the values of all declared variables.
Expected Output
Value of Integer is 30
Value of Floar is 30.78
Value of Double is 45.1234
Value of Char is u
Value of bool is 1

*/

#include<iostream>
using namespace std;
int main(){
    int intNumber = 30;
    float floatNumber = 30.78;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'u';

    cout << "Value of Integer is " << intNumber << endl;
    cout << "Value of Floar is " << floatNumber << endl;
    cout << "Value of Double is " << doubleNumber << endl;
    cout << "Value of Char is " << charName << endl;
    cout << "Value of bool is " << boolean << endl;

    return 0;

}
