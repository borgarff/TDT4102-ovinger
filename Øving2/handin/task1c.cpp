#include "std_lib_facilities.h"


//Legger sammen inputene til bruker
void inputIntegersAndPrintSum() {
	int a, b;
	cout << "Skriv inn et heltall: ";
	cin >> a; 
	cout << "\nSkriv inn et heltall: ";
	cin >> b;
	cout << "\nSummen av tallene: " << a + b;
}

int main() {
	inputIntegersAndPrintSum();

	return 0;
}
