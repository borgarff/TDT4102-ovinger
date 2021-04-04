//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// 
// keep_window_open() added for TDT4102, excercise 0

// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"
#include "cannonball.h"
#include "utilities.h"

//------------------------------------------------------------------------------'
void testDeviation(double compareOperand, double toOperand,
double maxError, string name);



// C++ programs start by executing the function main
int main() {
	double maxError = 0.0001;
	vector<double> velocityVector;
	srand(static_cast<unsigned int>(time(nullptr)));

	//Tester funksjoner i oppgave 2
	cout << acclY() << endl;
	cout << velY(10.0, 20.00) << endl;
	cout << posX(0.0,50.0,5.0) << endl;
	cout << posY(0.0,50.0,5.0) << endl;
	printTime(3800.00);
	cout << endl << flightTime(22.00);

	//Sjekker flyttall
	testDeviation(velY(10.0, 20.00), -186.2, maxError, "velY(10.0, 20.00)");
	testDeviation(posX(0.0,50.0,5.0), 250.0, maxError, "posX(0.0,50.0,5.0)");
	testDeviation(posY(0.0,50.0,5.0), 127.375, maxError, "posY(0.0,50.0,5.0)");
	testDeviation(flightTime(22.00), 4.48522, maxError, "flightTime(22.00)");

	//Oppgave 3d
	velocityVector = getVelocityVector(getUserInputTheta(), getUserInputAbsVelocity());	
	for (auto i = velocityVector.begin(); i != velocityVector.end(); ++i) {
		cout << *i << "\n"; 
	}

	
	cout << targetPractice(100.00, velocityVector.begin()[0], velocityVector.begin()[1]);
	
	cout << "\nTilfeldig tall er " << randomWithLimits(100, 10);

	//Oppgave 4
	playTargetPractice();
	
	return 0;
}

void testDeviation(double compareOperand, double toOperand,
double maxError, string name) {
	double difference; 
	
	if (compareOperand < toOperand && toOperand > 0.00) {
		difference = toOperand - compareOperand;
	}
	else {
		difference = compareOperand - toOperand;
	}

	if (maxError - difference >= 0) {
		cout << "\n" << name << " er innenfor maxError";
	}
	else {
		cout << "\n" << name << " er ikke innenfor maxError";
	}
}
//------------------------------------------------------------------------------
