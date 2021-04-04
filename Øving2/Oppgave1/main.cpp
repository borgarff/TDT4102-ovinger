#include "std_lib_facilities.h"
#include "Graph.h"
#include "Simple_window.h"

using namespace Graph_lib;

static double EUR = 9.95;

//Oppgave 1 a
//Returnerer input til bruker
void inputAndPrintInteger() {
	int a;

	cout << "Skriv inn et heltall: ";
	cin >> a; 
	cout << "\nDu skrev tallet: " << a;
}

//Oppgave 1b
//Returnerer input til bruker
int inputInteger() {
	int a;
	cout << "Skriv inn et heltall: ";
	cin >> a; 
	
	return a;
}

//Oppgave 1c
//Legger sammen inputene til bruker
void inputIntegersAndPrintSum() {
	int a, b;
	cout << "Skriv inn et heltall: ";
	cin >> a; 
	cout << "\nSkriv inn et heltall: ";
	cin >> b;
	cout << "\nSummen av tallene: " << a + b;
}

/*
Oppgave 1d
Jeg valgte å bruke inputAndPrintInteger i deloppgave c.
Dette er på grunn av at jeg liker å ha minst mulig i main() funksjonen.
Også for å holde main mest mulig ryddig.
Det er heller ikke nødvendig å returnere en verdi i denne oppgaven.
*/

//Oppgave 1e
//Oddetall blir true, partall blir false
bool isOdd(int number) { return number % 2; }

//Oppgave 1f
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

//Oppgave 2a
//Legger sammen alle tall i for-løkken
void loopfunc(int num) {
	int sum = 0;
	int loopNumber;
	
	for (int i = 1; i <= num; i++) {
		cout << "\nSkriv inn et heltall: ";
		cin >> loopNumber;
		sum += loopNumber;
	}
	
	cout << "\n\nSummen av tallene: " << sum;
}

//Oppgave 2b
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

/*Oppgave 2c
I deloppgave a er en for-løkke best. Fordi det gir midre linjer med kode, 
enn en while-løkke. En while-løkken kunne også ha blitt brukt.

I deloppagve b brukte jeg en do-while-løkke.
Dette er fordi programmet skal kjøre igjennom løkken minst en gang,
og brukerne skal kunne gå ut av løkken når dem vil.
*/

//inputDouble fra oppgave 2d
double inputDouble() {
	double kroner;
	do {
		cout << "Skriv inn en positiv verdi i Norske kroner som du vil konvertere: ";
		cin >> kroner;
	} while (kroner < 0);

	return kroner;
}

//oppgave 2e
//konverterer nok til euro
void currencyCalculator() {
	double kroner = inputDouble();
	double eur = EUR * kroner;
	cout.precision(2);
	cout << fixed;
	cout << "\n" << kroner << " kr,- er det samme som " << eur << " Euro.";
}

/*
Du bør bruke inputDouble i deloppgave 2e fordi programmet spør etter et desimaltall, og ikke et heltall.
Det kan skape problemer med konverteringen hvis du bruker inputInteger istedenfor inputDouble.
*/

//Skriver ut menyvalg
void meny() {
	cout << "Velg funksjon:\n0) Avslutt\n1) Summer to tall\n2) Summer flere tall\n"
	<< "3) Konverter NOK til EURO.\n4) Vis en gangetabell\n5) Røtter til ligningen.\nvalg (0-5): ";
}

//Oppgave 3b
//En gangetabell
void gangetabell() {
	cout << setw(10) << 0 << setw(10) << 1 << setw(10) << 2 << setw(10) << 3 << setw(10) << 4 << setw(10) << 5;
	cout << setw(10) << 6 << setw(10) << 7 << setw(10) << 8 << setw(10) << 9 << setw(10) << 10 << endl;
	cout << setw(10) << 1 << setw(10) << 1 << setw(10) << 2 << setw(10) << 3 << setw(10) << 4 << setw(10) << 5;
	cout << setw(10) << 6 << setw(10) << 7 << setw(10) << 8 << setw(10) << 9 << setw(10) << 10 << endl;
	cout << setw(10) << 2 << setw(10) << 2 << setw(10) << 4 << setw(10) << 6 << setw(10) << 8 << setw(10) << 10;
	cout << setw(10) << 12 << setw(10) << 14 << setw(10) << 16 << setw(10) << 18 << setw(10) << 20 << endl;
	cout << setw(10) << 3 << setw(10) << 3 << setw(10) << 6 << setw(10) << 9 << setw(10) << 12 << setw(10) << 15;
	cout << setw(10) << 18 << setw(10) << 21 << setw(10) << 24 << setw(10) << 27 << setw(10) << 30 << endl;
	cout << setw(10) << 4 << setw(10) << 4 << setw(10) << 8 << setw(10) << 12 << setw(10) << 16 << setw(10) << 20;
	cout << setw(10) << 24 << setw(10) << 28 << setw(10) << 32 << setw(10) << 36 << setw(10) << 40 << endl;
	cout << setw(10) << 5 << setw(10) << 5 << setw(10) << 10 << setw(10) << 15 << setw(10) << 20 << setw(10) << 25;
	cout << setw(10) << 30 << setw(10) << 35 << setw(10) << 40 << setw(10) << 45 << setw(10) << 50 << endl;
	cout << setw(10) << 6 << setw(10) << 6 << setw(10) << 12 << setw(10) << 18 << setw(10) << 24 << setw(10) << 30;
	cout << setw(10) << 36 << setw(10) << 42 << setw(10) << 48 << setw(10) << 54 << setw(10) << 60 << endl;
	cout << setw(10) << 7 << setw(10) << 7 << setw(10) << 14 << setw(10) << 21 << setw(10) << 28 << setw(10) << 35;
	cout << setw(10) << 42 << setw(10) << 49 << setw(10) << 56 << setw(10) << 63 << setw(10) << 70 << endl;
	cout << setw(10) << 8 << setw(10) << 8 << setw(10) << 16 << setw(10) << 24 << setw(10) << 32 << setw(10) << 40;
	cout << setw(10) << 48 << setw(10) << 56 << setw(10) << 64 << setw(10) << 72 << setw(10) << 80 << endl;
	cout << setw(10) << 9 << setw(10) << 9 << setw(10) << 18 << setw(10) << 27 << setw(10) << 36 << setw(10) << 45;
	cout << setw(10) << 54 << setw(10) << 63 << setw(10) << 72 << setw(10) << 81 << setw(10) << 90 << endl;
	cout << setw(10) << 10 << setw(10) << 10 << setw(10) << 20 << setw(10) << 30 << setw(10) << 40 << setw(10) << 50;
	cout << setw(10) << 60 << setw(10) << 70 << setw(10) << 80 << setw(10) << 90 << setw(10) << 100 << endl;
}

//Oppgave 4a
double discriminant(double a, double b, double c) {
	return (b * b) - (4 * a * c);
}

//Oppgave 4b
void printRealRoots() {
	double a, b, c;
	cout << "\nVelg tre tall til andregradsligningen ax2 + bx + c = 0\n";
	cin >> a >> b >> c;
	double disc = discriminant(a,b,c);
	if (disc > 0) {
		double x1 = (-b + sqrt(disc))/(2*a);
		double x2 = (-b - sqrt(disc))/(2*a);
		cout << "\nTo løsninger " << x1 << " og " << x2;
	}
	else if (disc == 0) {
		double x1 = (-b + sqrt(disc))/(2*a);
		cout << "\nEn løsning " << x1;
	}
	else {
		cout << "\nIngen løsning!";
	}
	 
}

//Oppgave 5
void pythagoras() {

	Simple_window win{Point{100,100},700,700,"Pythagoras"};
	Polygon rightTriangle;
	Polygon katheteA;
	Polygon katheteB;
	Polygon hypotenuse;
	Polygon rightTriangleA;
	Polygon rightTriangleB;


	rightTriangle.add(Point{150, 250});
	rightTriangle.add(Point{150, 350});
	rightTriangle.add(Point{350, 350});
	rightTriangle.set_fill_color(Color::black);

	katheteA.add(Point{150, 250});
	katheteA.add(Point{150, 350});
	katheteA.add(Point{50, 350});
	katheteA.add(Point{50, 250});
	katheteA.set_fill_color(Color::red);

	katheteB.add(Point{150, 350});
	katheteB.add(Point{350, 350});
	katheteB.add(Point{350, 550});
	katheteB.add(Point{150, 550});
	katheteB.set_fill_color(Color::green);

	
	rightTriangleA.add(Point{350, 350});
	rightTriangleA.add(Point{450, 350});
	rightTriangleA.add(Point{450, 150});

	rightTriangleB.add(Point{150, 250});
	rightTriangleB.add(Point{150, 50});
	rightTriangleB.add(Point{250, 50});
	
	hypotenuse.add(Point{150, 250});
	hypotenuse.add(Point{350, 350});
	hypotenuse.add(Point{450, 150});
	hypotenuse.add(Point{250, 50});
	hypotenuse.set_fill_color(Color::blue);
	
	

	win.attach(rightTriangle);
	win.attach(katheteA);
	win.attach(katheteB);
	win.attach(rightTriangleA);
	win.attach(rightTriangleB);
	win.attach(hypotenuse);

	win.wait_for_button();
}

//Oppgave 6
void calculateBalance(int saldo, int rente, int aar) {
	vector<int> totalValue(aar); 

	cout << "\nHer kan du se hvordan verdien øker etter noen år\n";
	for (int i = 0; i < 10; i++) {
		saldo = saldo * (1.00 + (static_cast<double>(rente) / 100.00));
		totalValue[i] = saldo;
		cout << totalValue[i] << '\n';
	}
}

void printBalance() {
	int aar, saldo, rente;
	
	cout << "\nHvor stort beløp skal du sette inn: ";
	cin >> saldo;
	cout << "\n Antall år du skal spare: ";
	cin >> aar;
	cout << "\nHvor mye er renten på: ";
	cin >> rente;
	calculateBalance(saldo, aar, rente);
}

int main() {

	int valg;
	
	meny();
	cin >> valg;
	while (valg != 0) {
		//Oppgave 3a
		switch (valg) {
			case 0 : cout << "\nAvslutter program"; break;
			case 1 : inputIntegersAndPrintSum(); break;
			case 2 : loopfunc(inputInteger()); break;
			case 3 : currencyCalculator(); break;
			case 4 : gangetabell(); break;
			case 5 : printRealRoots(); break; //Oppgave 4c
			case 6 : pythagoras();
			case 7 : printBalance();
			default : meny(); break;
		}
		cout << "\nNytt valg fra meny (0 for å avslutte): ";
		cin >> valg;
	}
	
	return 0;
}