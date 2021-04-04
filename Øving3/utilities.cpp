#include "std_lib_facilities.h"
#include "utilities.h"
#include "cannonball.h"

int randomWithLimits(int high, int low) {
    return low + rand() % (high - low + 1);
}

void playTargetPractice() {
    double theta, absVelocity, distance;
    int attempts = 10;
    int goal = randomWithLimits(1000, 100);
    
    cout << "\ntilfeldig tall er " << goal;
    while (attempts != 0) {
        theta = getUserInputTheta();
        absVelocity = getUserInputAbsVelocity();
        distance = targetPractice(goal, getVelocityX(theta, absVelocity), getVelocityY(theta, absVelocity));

        if (distance <= 5) {
            cout << "\nDu traff blinken!";
            break;
        }
        else {
            cout << "\nDu bommet :(  Du var " << distance << " unna målet!"; 
        }
    }
    if (attempts == 0) {
        cout << "\nDu tapte :(";
    }
    
    
}
