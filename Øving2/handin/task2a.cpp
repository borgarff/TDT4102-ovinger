#include "std_lib_facilities.h"

//Legger sammen alle tall i for-løkken
void loopfunc() {
	int loopNumber;
	int number;
	int sum = 0;

	cout << "Hvor mange tall skal du skrive inn: ";
	cin >> number;
	
	for (int i = 1; i <= num; i++) {
		cout << "\nSkriv inn et heltall: ";
		cin >> loopNumber;
		sum += loopNumber;
	}
	
	cout << "\n\nSummen av tallene: " << sum;
}

int main() {


	loopfunc();

	return 0;
}
