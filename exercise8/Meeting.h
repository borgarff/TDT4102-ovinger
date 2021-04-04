#include "header.h"
#include "person.h"


enum class Campus {Trondheim, Ålesund, Gjøvik};
ostream& operator<<(ostream& os, const Campus &camp);


class Meeting {
    private:
    int day;
    int startTime;
    int endTime;
    Campus location;
    string subject;
    const Person* leader;
    set<const Person*> participants;
    static inline set<const Meeting*> meetings{};

    public:
    Meeting(int d, int start, int end, Campus loc, string sub, const Person* lead);
    ~Meeting();
    int getDay() const;
    int getStartTime() const;
    int getEndTime() const;
    string getLocation() const;
    string getSubject() const;
    string getLeader() const;
    void addParticipant(Person* p);
    vector<string> getParticipantList();
    vector<const Person*> findPotentialCoDriving();
};

ostream& operator<<(ostream& os, const Meeting &meeting);