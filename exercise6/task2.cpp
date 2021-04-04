#include "std_lib_facilities.h"
#include "task2.h"

//oppgave 2
void lettersInConstitution() {
	ifstream grunnlov("grunnlov.txt");
	ofstream letters("bokstaverIGrunnlov.txt");
	vector<int> characterCount(27);
	int letterNr = 0;
	char ch;
	
	while (!grunnlov.eof()) {
		grunnlov >> ch;

		//Sjekker om ch er en bokstav
		if (isalpha(ch)) {
			++characterCount[tolower(ch) - 'a'];
		}
	}

	//Skriver ut alle bokstavene i grunnloven
	for (char l = 'a'; l<='z'; l++) {
		letters << l << ": " << characterCount[letterNr++] << "\t";
		if (!(letterNr % 3)) {
			letters << "\n";
		}
	}
	
}