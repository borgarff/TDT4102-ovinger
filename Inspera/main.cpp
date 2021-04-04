#include "std_lib_facilities.h"
#include "survey2021.h"
#include <map>

int main() {
	map<string, int> surv = mapSurvey();
	surveyResults(surv);

	keep_window_open();
	return 0;
}
