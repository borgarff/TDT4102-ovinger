#include "std_lib_facilities.h"


//Returnerer input til bruker
int inputInteger() {
	int a;
	cout << "Skriv inn et heltall: ";
	cin >> a; 
	
	return a;
}

int main() {
	int number = inputInteger();
	cout << "\nDu skrev tallet: " << number;

	return 0;
}