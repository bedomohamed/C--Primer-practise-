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
