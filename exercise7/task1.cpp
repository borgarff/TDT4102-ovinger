#include "Graph_lib/Graph.h"
#include <string>
#include "task1.h"


//Oppgave 1a
//Hva er forskjellen på public, private og protected?
/*
public, private og protected sier litt om hvem som har tilgang på hva i klassen
public er åpen for alle, private er bare klassen som har tilgang på. 
Protected er tilgjenngelig for klassen og klassen sine barn (arv).
*/

Animal::Animal(int a, string n) {
    age =a;
    name = n;
}
/*
string Animal::to_string() {
    return "\nNavn: " + name + "\tAlder: " + std::to_string(age);
}
*/
Cat::Cat(int a, string n):Animal(a,n) {};

string Cat::to_string() {

    return "\nCat: " + name + "\tAge: " + std::to_string(age);
}

Dog::Dog(int a, string n):Animal(a,n) {};

string Dog::to_string() {
    return "\nDog: " + name + "\tAge: " + std::to_string(age);
}


//Når man dropper virtul i Animal sin to_string, blir ikke barna sine to_string kaldt.
void testAnimal() {
    Graph_lib::Vector_ref<Animal> vect;
    //Animal rabbit = Animal(12, "Trampe");
    Dog dog = Dog(10,"Nusse");
    Cat cat = Cat(8, "Mat Mons");

    cout << cat.to_string();
    cout << dog.to_string();

    //vect.push_back(rabbit);
    vect.push_back(dog);
    vect.push_back(cat);
    
    for (int i = 0; i < vect.size(); i++) {
        cout << endl << vect[i].to_string();
    }
}

