#include "person.h"
#include <ostream>

Person::Person(string n, string e, Car *c) {
    name = n; 
    email = e;
    car = c;
}

string Person::getName() const {
    return name;
}

string Person::getEmail() const {
    return email;
}

void Person::setEmail() {
    cout << "\nHvilken e-post vil du sette? ";
    cin >> email;
}

bool Person::hasAvailableSeats() const {
    if (car != nullptr && car->hasFreeSeats()) {
        return true;
    }
    return false;
}

//Oppgave 2d 
//Denne bør deklareres med const fordi det er ingen 
//variabler som skal endres.
//Hvis det denne operatoren skulle gjøre noen endringer,
//så burde man ikke ha brukt const.
ostream& operator<<(ostream& os, const Person& person) {
    os << "\nNavn: " << person.name << "\tE-post: " << person.email;
    
    if (person.car != nullptr) os << "\nPerson har bil.\n";
    else os << "\nPersonen har ikke bil.\n";
    
    return os;
}