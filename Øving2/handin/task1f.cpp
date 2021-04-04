#include "std_lib_facilities.h"

//Konverterer sekunder til Timer, Minutter og sekunder
void printHumanReadableTime() {
	int sec, min, hour;;
	cout << "Skriv inn tid i sekunder: ";
	cin >> sec;
	min = sec / 60;
	hour = min / 60;
	min = min % 60;
	sec = sec % 60;

	cout << "\nDette blir " << hour << " time(r). " 
	<< min << " minutt(er) og " << sec << " sekund(er)"; 
}

int main() {


	printHumanReadableTime();

	return 0;
}
