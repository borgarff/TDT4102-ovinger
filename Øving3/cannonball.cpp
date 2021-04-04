
#include "std_lib_facilities.h"
#include "cannonball.h"


double acclY() {
    return -9.81;
}

double velY(double initVelocityY, double time) {
    return initVelocityY + acclY() * time;
}

double posX(double initPosition, double initVelocity, double time) {
    return initPosition + initVelocity * time + (0 * (time * time))/2;
}

double posY(double initPosition, double initVelocity, double time) {
    return initPosition + initVelocity * time + (acclY() * (time * time))/2;
}

void printTime(double time) {
    int sec = (int) time % 60;
    int min = (int) time % 60;
    int hour = time / 3600;

    cout << "\nDet har gått " << hour << " timer, " << min 
    << " minutter og " << sec << " sekunder";
}

double flightTime(double startSpeed) {
    return (-2 * startSpeed) / acclY();
}

double getUserInputTheta() {
    double theta;
    cout << "\nSkriv inn vinkelen: ";
    cin >> theta;

    return theta;
}

double getUserInputAbsVelocity() {
    double absVelocity;
    cout << "\nSkriv inn absoluttfart: ";
    cin >> absVelocity;

    return absVelocity;
}

// 1 deg = 0.0175 rad
double degToRad(double deg) {
    return deg * 3.14 / 180;
}

double getVelocityX(double theta, double absVelocity) {
    return absVelocity * cos(theta);
}

double getVelocityY(double theta, double absVelocity) {
    return absVelocity * sin(theta);
}

vector<double> getVelocityVector(double theta, double absVelocity) {
    vector<double> VelocityVector;
    VelocityVector.push_back(getVelocityX(theta, absVelocity));
    VelocityVector.push_back(getVelocityY(theta, absVelocity));

    return VelocityVector;
}

//Oppgave 3b
double getDistanceTraveled(double velocityX, double velocityY) {
    double time = flightTime(velocityY);
    return posX(0.00, velocityX, time);
}

//Oppgave 3c
double targetPractice(double distanceToTarget, double velocityX, double velocityY) {
    return distanceToTarget - getDistanceTraveled(velocityX, velocityY);
}