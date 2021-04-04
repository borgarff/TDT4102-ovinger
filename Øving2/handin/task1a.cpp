#include "std_lib_facilities.h"


//Returnerer input til bruker
void inputAndPrintInteger() {
	int a;

	cout << "Skriv inn et heltall: ";
	cin >> a; 
	cout << "\nDu skrev tallet: " << a;
}

int main() {
	inputAndPrintInteger();

	return 0;
}