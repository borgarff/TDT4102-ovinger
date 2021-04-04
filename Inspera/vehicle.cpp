#include "vehicle.h"

// Implement all the necessary functions as described in the task here.
#include "std_lib_facilities.h"
#include "vehicle.h"

Vehicle::Vehicle (string n, Color c, double s) {
    speed = s; color = c; name = n;
}

bool Vehicle::allowedSpeed() {
    if (speed > 1000.00) {
        return false;
    }
    return true;
}