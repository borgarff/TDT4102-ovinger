#include "std_lib_facilities.h"
#include "task3.h"

//oppgave 3
void task3Test(CourseCatalog catalog, ofstream& out) {
	/*
	catalog.addCourse("TDT4110", "Informasjonsteknologi grunnkurs");
	catalog.addCourse("TDT4102", "Prosedyre- og objektorientert programmering");
	catalog.addCourse("TMA4100", "Matematikk 1");
	*/
	cout << catalog;

	out << catalog;
}

CourseCatalog::CourseCatalog() {
	ifstream input("task3.txt");
	string code, name;

	while(!input.eof()) {
		getline(input, code); 
		getline(input, name);
		addCourse(code, name);
	}
}

void CourseCatalog::addCourse(string code, string name) {
	//course.insert( pair<string, string>(code, name));
	course.emplace(code, name);
}

void CourseCatalog::removeCourse(string code) {
	course.erase(code);
}

string CourseCatalog::getCourse(string code) {
	return code + " " + course[code];
}

ostream& operator<<(ostream& os, const CourseCatalog& catalog) {
	for (auto const& x: catalog.course) {
		os << x.first << "\n" << x.second << "\n";
	}
	return os;
}
