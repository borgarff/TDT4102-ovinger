#include "std_lib_facilities.h"
#include "task1.h"

//Oppgave 1b
void readFromFile() {
	ifstream input("userInput.txt");
	ofstream output("outFile.txt");
	string text;
	int line = 0;

	if (!input) {
		cout << "\nFilen eksisterer ikke";
	}
	else {
		cout << "\nÅpner filen!!\n";
	}
	while (!input.eof()) {
		input >> text;
		output << ++line << ": " << text << "\n";
	}
}

//Oppgave 1a
void writeToFile() {
	ofstream output("userInput.txt");
	string input;

	//Sjekker om du skriver quit
	while (input.compare("quit")) { 
		cout << "Skriv noe til filen userInput\n";
		cin >> input;
		if (input.compare("quit")) {
			output << input << "\n";
		}
	}

}
