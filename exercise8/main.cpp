#include "MeetingWindow.h"
#include <Graph_lib/Point.h>


int main() {
    
    /*
    //Oppgave 1 og 2
    Car c1 = Car(5);
    Person p1 = Person("Ole", "ole@test.no");
    Person p2 = Person("Ola", "ola@normann.no", &c1);

    //cout << p1 << endl << p2;
    */
    /*
    //Oppgave 3
    Meeting m1 = Meeting(20, 16, 18, Campus::Trondheim, "Norsk", &p2);
    Meeting m2 = Meeting(21, 10, 12, Campus::Gjøvik, "TDT4102", &p1);

    //cout << m1 << m2;
    */

    //Oppgave 4 og 5
    MeetingWindow w1(point, w, h, "MeetingWindow");
    gui_main();
    w1.printPeople();

    return 0;
}

