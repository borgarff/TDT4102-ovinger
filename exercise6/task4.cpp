#include "std_lib_facilities.h"
#include "task4.h"
#include <fstream>
#include <vector>

istream& operator>>(istream& is, Temps& t) {
    is >> t.max >> t.min;

    return is;
}

vector<Temps> readTemps(ifstream& in) {
    vector<Temps> t;
    Temps temp;
    string line;

    while (!in.eof()) {
        in >> temp;
        t.push_back(temp);
    }

    return t;    
}

void tempStats(vector<Temps> t) {
    Temps temp;
    int low, high;
    temp.min = temp.max = 0.00;

    for (int i = 0; i < t.size(); i++) {
        if(t[i].max > temp.max) {
            temp.max = t[i].max;
            high = i;
        }
        if(t[i].min < temp.min) {
            temp.min = t[i].min;
            low = i;
        }
    }

    cout << "\nDag med høyest tempratur var dag " << high 
    << " med tempraturen " << temp.max;
    cout << "\nDag med lavest tempratur var dag " << low
    << " med tempraturen " << temp.min << endl;
}