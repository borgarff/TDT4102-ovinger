#include "std_lib_facilities.h"

static double EUR = 9.95;

//Gjenbruk av inputDouble fra oppgave 2d
double inputDouble() {
	double kroner;
	do {
		cout << "Skriv inn en positiv verdi i Norske kroner som du vil konvertere: ";
		cin >> kroner;
	} while (kroner < 0);

	return kroner;
}

//Returnerer konvertert til euro
double currencyCalculator(double nok) {
	return nok * EUR;
}

int main() {
	double kroner = inputDouble();
	double eur = currencyCalculator(kroner);

	cout.precision(2);
	cout << fixed;
	cout << "\n" << kroner << " kr,- er det samme som " << eur << " Euro.";

	return 0;
}