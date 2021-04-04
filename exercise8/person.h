#include "header.h"
#include "car.h"

class Person {
    private:
    string name;
    string email;
    Car *car;
    
    public:
    Person(string n, string e, Car *c = nullptr);
    string getName() const;
    string getEmail() const;
    void setEmail();
    bool hasAvailableSeats() const;
    friend ostream& operator<<(ostream& os, const Person &person);
};