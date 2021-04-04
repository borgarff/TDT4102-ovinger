#include "std_lib_facilities.h"

//Oddetall blir true, partall blir false
bool isOdd(int number) { return number % 2; }

int main() {
	int num;
	cout << "Skriv et tall mellom 0-15: ";
	cin >> num;

	if (isOdd(num)) {
		cout << "\nDet er et oddetall!";
	}
	else {
		cout << "\nDette er et partall!";
	}
	
	return 0;
}