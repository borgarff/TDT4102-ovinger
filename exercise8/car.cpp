#include "std_lib_facilities.h"
#include "car.h"

Car::Car(int seats) {
    freeSeats = seats;
}

bool Car::hasFreeSeats() const{
    if (freeSeats) return true;
    return false;
}

void Car::reserveFreeSeat() {
    int seats;
    cout << "\nDet er " << freeSeats << " ledig.";
    cout << "\nHvor mange seter skal reseveres? ";
    cin >> seats;

    while (seats > freeSeats) {
      cout << "\nKan ikke mer enn det er ledig! ";
      cin >> seats;  
    }

    freeSeats -= seats;
}