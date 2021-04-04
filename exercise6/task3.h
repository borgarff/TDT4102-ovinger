#include "std_lib_facilities.h"

class CourseCatalog {
private:
	map<string, string> course;
public:
	CourseCatalog();
	int getNrOfCourses();
	void removeCourse(string code);
	string getCourse(string code);
	void addCourse(string code, string name);
	friend ostream& operator<<(ostream& os, const CourseCatalog& course);
};

void task3Test(CourseCatalog catalog, ofstream& out);