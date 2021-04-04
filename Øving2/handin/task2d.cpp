#include "std_lib_facilities.h"

//Kan også bruke andre floting-point datatyper
//Returnerer input til bruker
double inputDouble() {
	double a;
	cout << "Skriv inn et desimaltall: ";
	cin >> a; 
	
	return a;
}

int main() {
	double number = inputDouble();
	cout << "\nDu skrev tallet: " << number;

	return 0;
}