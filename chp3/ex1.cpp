#include <iostream>
using namespace std;

int main(){

    int heightInch;
    int heightFeet;
    int height;
    const int INCHES_IN_FEET = 12;

    cout << "Please enter you height in inches: ";
    cin >> height;

    heightFeet = height / INCHES_IN_FEET;
    heightInch = height % INCHES_IN_FEET;
    cout << "Your height is " << heightFeet << " Ft and " << heightInch << " Inches.\n";

    return 0;
}
