#include "survey2021.h"
#include "std_lib_facilities.h"
#include <algorithm>
#include <fstream>
#include <string>

// Implement all the necessary functions as described in the task.

map<string,int> mapSurvey() {
    ifstream input("survey_2021.txt");
    string word;
    map<string, int> survey;

    // check if the file exsite
    if (!input) {
        cout << "\nKan ikke åpne filen!";
    }
    else {
        // Reads from file
        while (!input.eof()) {
            input >> word;
            if (survey.find(word) != survey.end()) {
                survey[word]++;
            }
            else {
                survey.emplace(word, 1);
            }
        }
    }
    return survey;
}

// Sorts the map with the most used words
vector<string> sortVector(map<string, int> surv) {
    vector<string> list;
    vector<pair<string, int> > sorting;

    for(auto& x: surv) {
        sorting.push_back(x);
    }

    sort(sorting.begin(), sorting.end());

    for (auto& it: sorting) {
        list.push_back(it.first);
    }
    return list;
}

void surveyResults(map<string, int> surv) {
    ofstream out("survey_result.txt");

    out << "Survey results 2021:\n ----------------------------\n";
    for (auto const& x: surv) {
        out << x.first << " , " << x.second << endl;
    }
}

// Prints the surveymap
void printMapSurvey(map<string, int> survey) {
    for (auto const& x: survey) {
		cout << x.first << " : " << x.second << "\n";
	}
}

void printList(vector<string> list) {
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << "\n";
    }
}