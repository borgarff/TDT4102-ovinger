#include "std_lib_facilities.h"

//Summer sammen tall helt til bruker skriver 0
void loopfunc() {
	int sum = 0;
	int number;
	
	do {
		cout << "\nSkriv inn et heltall (0 for å avslutte): ";
		cin >> number;
		sum += number;
	} while (number != 0);
	
	cout << "\n\nSummen av tallene: " << sum;
}

int main() {
	loopfunc();

	return 0;
}