#include <iostream>
#include "Dummy.h"

Dummy::Dummy() {
    num = new int{0};
}

Dummy::~Dummy() {
    delete num;
}

Dummy::Dummy(const Dummy& dummy) :num{ nullptr } {
    this->num = new int{};
    *num = *dummy.num;
}

Dummy Dummy::operator=(Dummy& dummy) {
    *num = *dummy.num; //swapper pekere
    return *this;
}


//Denne får en error fordi det ikke er en kopikonstrøktor
//Den får en free space error
void dummyTest() {
    Dummy a;
    *a.num = 4;

    Dummy b{a};
    Dummy c;

    c = a;
    std::cout << "a: " << *a.num << '\n';
    std::cout << "b: " << *b.num << '\n';
    std::cout << "c: " << *c.num << '\n';

    *b.num = 3;
    *c.num = 5;

    std::cout << "a: " << *a.num << '\n';
    std::cout << "b: " << *b.num << '\n';
    std::cout << "c: " << *c.num << '\n';
}