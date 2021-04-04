#include "std_lib_facilities.h"
#include <fstream>
#include <vector>

struct Temps {
    double max;
    double min;
};

istream& operator>>(istream& is, Temps& t);
vector<Temps> readTemps(ifstream& in);
void tempStats(vector<Temps> t);