//Exerice 6 TDT4102

#include "std_lib_facilities.h"
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include <fstream>
#include <vector>


// C++ programs start by executing the function main
int main() {
	//Oppgave 1
	/*
	writeToFile();
	readFromFile();
	*/

	//oppgave 2
	/*
	lettersInConstitution();
	*/

	//Oppgave 3
	/*
	CourseCatalog courseCatalog = CourseCatalog();
	ofstream output("task3.txt");

	task3Test(courseCatalog, output);
	*/

	//Oppgave 4
	ifstream tempFile("temperatures.txt");
	vector<Temps> t = readTemps(tempFile);
	tempStats(t);
	
	return 0;
}