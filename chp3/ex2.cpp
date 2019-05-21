/*Write a short program that asks for your height in feet and inches and your weight in
pounds. (Use three variables to store the information.) Have the program report your
body mass index (BMI). To calculate the BMI, first convert your height in feet and inches
to your height in inches (1 foot = 12 inches). Then, convert your height in inches to
your height in meters by multiplying by 0.0254. Then, convert your weight in pounds
into your mass in kilograms by dividing by 2.2. Finally, compute your BMI by dividing
your mass in kilograms by the square of your height in meters. Use symbolic constants
to represent the various conversion factors.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int heightInInches;
    int heightInFeet;
    int weightInPounds;
    int totlaHeightInFeet;
    double heightInMeter;
    double weightInKg;
    double bodyMassIndex;

    const int INCHES_IN_FEET =  12;
    const double METERS_IN_INCHES = 0.0254;
    const double KG_IN_POUND = 2.2;
    cout << "Please enter your height in ft: ";
    cin >> heightInFeet;
    cout << "Please enter your height in inches: ";
    cin >> heightInInches;
    cout << "Please enter your weight in pounds: ";
    cin >> weightInPounds;
    totlaHeightInFeet = (heightInFeet * INCHES_IN_FEET) + heightInInches;
    heightInMeter = totlaHeightInFeet * METERS_IN_INCHES;
    weightInKg = weightInPounds / KG_IN_POUND;

    bodyMassIndex = weightInKg / pow(heightInMeter, 2);

    cout << fixed << "Your body mass index is : " << setprecision(2) << bodyMassIndex <<endl;

    return 0;


}
