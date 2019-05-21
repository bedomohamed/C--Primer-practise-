/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format. There are 60 seconds of arc to a
minute and 60 minutes of arc to a degree; represent these values with symbolic constants. You should use a separate variable for each input value. A sample run should
look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>
using namespace std;

int main(){

    double latitudeDegree;
    double latitudeMinutes;
    double latitudeSeconds;
    double secondsToDegrees;
    double minutesToDegrees;
    double totalDegrees;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees:";
    cin  >> latitudeDegree;
    cout << "Next, enter the minutes of arc:";
    cin  >> latitudeMinutes;
    cout << "Finally, enter the seconds of arc: ";
    cin  >> latitudeSeconds;

    secondsToDegrees = latitudeSeconds / 3600;
    minutesToDegrees = latitudeMinutes / 60;
    totalDegrees = minutesToDegrees + secondsToDegrees + latitudeDegree;

    cout << latitudeDegree << " degrees," << latitudeMinutes;
    cout << " minutes," << latitudeSeconds << " seconds = ";
    cout<< totalDegrees <<" degrees.\n";

    return 0;




}
