#pragma once
#include "std_lib_facilities.h"

// Task a)
// Create an color enum here
enum class Color {
    blue, yellow, red, green
};


// Task b) 
// Complete the Vehicle class as described in the task
class Vehicle {
    private:
    string name;
    
    protected:
    Color color;
    double speed;
    
    public:
    Vehicle (string name, Color color, double speed);
    bool allowedSpeed();

};


// Task c)
// Create the Car class underneath as described in the task

class Car : public Vehicle {
    private:
    int numberOfWheels;
    public:
    Car();
    void changeColor(Color newColor);
    bool allowedSpeed();
};