#include "MeetingWindow.h"
#include <Graph_lib/GUI.h>
//#include "Graph_lib/Point.h"


MeetingWindow::MeetingWindow(Point xy, int w, int h, const string& title) :
Window(xy, w, h, title), quitBtn(Point{400, 300}, btnW, btnH, "quit", cb_quit),
name(Point{100, 200}, feildW, feildH, "Name"), email(Point{100, 300}, feildW, feildH, "Email"),
personNewBtn(Point{200, 400}, btnW, btnH, "add people", cb_new_person){
    attach(quitBtn);
    attach(name);
    attach(email);
    attach(personNewBtn);
}

MeetingWindow::~MeetingWindow() {
    for (int i = 0; i < people.size(); i++) {
        delete people[i];
    }
}

void MeetingWindow::cb_quit(Address, Address pw) {
    reference_to<MeetingWindow>(pw).hide();
}

void MeetingWindow::addPerson() {
    string givenName = name.get_string();
    string givenEmail = email.get_string();

    if (!givenName.empty() && !givenEmail.empty()) {
        people.push_back(new Person(givenName, givenEmail));
    }

    name.clear_value();
    email.clear_value();
}

void MeetingWindow::cb_new_person(Address, Address pw) {
    reference_to<MeetingWindow>(pw).addPerson();
}

void MeetingWindow::printPeople() {
    for (auto peoples: people) {
        cout << *peoples;
    }
}