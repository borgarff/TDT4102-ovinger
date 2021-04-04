#include "Graph_lib/Graph.h"
#include <string>

class Animal {
    protected:
    string name;
    int age;

public:
    Animal(int a, string n);

    virtual string to_string() = 0;
    //string to_string();
};

class Cat : public Animal {
    public:
    Cat(int a, string n);
    string to_string();
};

class Dog : public Animal {
    public:
    Dog(int a, string n);
    string to_string();
};

void testAnimal();