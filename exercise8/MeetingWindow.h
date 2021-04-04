#include "header.h"
#include "Meeting.h"
#include <Graph_lib/GUI.h>
#include <Graph_lib/Point.h>

using namespace Graph_lib;

static constexpr Point point{300, 300};
static constexpr int w = 500;
static constexpr int h = 500;
static constexpr int btnW = 70;
static constexpr int btnH = 50;
static constexpr int feildW = 200;
static constexpr int feildH = 25;
static constexpr int pad = 5;


class MeetingWindow : public Window {
    private:
    Button quitBtn;
    In_box name;
    In_box email;
    vector<Person*> people;
    Button personNewBtn;

    public:
    MeetingWindow(Point xy, int w, int h, const string& title);
    ~MeetingWindow();
    static void cb_quit(Address, Address pw);
    void addPerson();
    static void cb_new_person(Address, Address pw);
    void printPeople();
};