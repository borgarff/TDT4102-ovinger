#include "Meeting.h"

Meeting::Meeting(int d, int start, int end, 
Campus loc, string sub, const Person* lead) {
    day = d;
    startTime = start;
    endTime = end;
    location = loc;
    subject = sub;
    leader = lead;
    participants.insert(leader);
    meetings.insert(this);
}

Meeting::~Meeting() {
    meetings.erase(this);
}

int Meeting::getDay() const{
    return day;
}

int Meeting::getStartTime() const {
    return startTime;
}

int Meeting::getEndTime() const {
    return endTime;
}

string Meeting::getLocation() const {
    if (location == Campus::Gjøvik) return "Gjøvik";
    else if (location == Campus::Trondheim) return "Trondheim";
    return "Ålesund";
}

string Meeting::getSubject() const {
    return subject;
}

string Meeting::getLeader() const {
    return leader->getName();
}

void Meeting::addParticipant(Person* p) {
    participants.insert(p);
}

vector<string> Meeting::getParticipantList() {
    vector<string> participant;
    
    for(auto *elem: participants) {
        participant.push_back(elem->getName());
    }
    return participant;
}

ostream& operator<<(ostream& os, const Meeting &meeting) {
    os << "\nEmne: " << meeting.getSubject() << "\nLokasjon: "
    << meeting.getLocation() << "\nStart tid: " << meeting.getStartTime()
    << "\tSlutt tid: " << meeting.getEndTime()
    << "\nMøteleder: " << meeting.getLeader() << endl;
    return os;
}

vector<const Person*> Meeting::findPotentialCoDriving() {
    vector<const Person*> persons;
    
    for (auto meeting: meetings) {
        if (meeting != this && meeting->location == location &&
        (meeting->getEndTime() - endTime) <= 1 &&  (meeting->getStartTime() <= 1)
        && meeting->getDay() == day) {
            for (auto participant: participants) {
                if (participant->hasAvailableSeats()) {
                    persons.push_back(participant);
                }
            }
        }
    }
    return persons;
}