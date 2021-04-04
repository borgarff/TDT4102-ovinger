//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// 
// keep_window_open() added for TDT4102, excercise 0

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------'

void readFromFile();
void writeToFile();

// C++ programs start by executing the function main
int main()
{
	readFromFile();

	keep_window_open();
}

void readFromFile() {
	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist {iname};
	// ist is an input stream for the file named name
	if (!ist) error("can't open input file ",iname);
}

void writeToFile() {

}



//------------------------------------------------------------------------------
