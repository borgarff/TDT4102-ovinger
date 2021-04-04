#include "Graph_lib/Simple_window.h"
#include "Graph_lib/Graph.h"
#include "task1.h"
#include "Emoji.h"
#include <Graph_lib/Point.h>

// Size of window and emoji radius
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

int main() {
    //Oppgave 1
    /*
    testAnimal();
    */

    using namespace Graph_lib;

	const Point tl{100, 100};
	const string win_label{"Emoji factory"};
	Simple_window win{tl, xmax, ymax, win_label};

    //All the emojis
    Vector_ref<Emoji> emojis;
    emojis.push_back(new EmptyFace{ Point{500,100}, emojiRadius });
	emojis.push_back(new SmilingFace{ Point{100,300}, emojiRadius });
	emojis.push_back(new SadFace{ Point {300,300}, emojiRadius });
	emojis.push_back(new AngryFace{ Point{500,300}, emojiRadius });
	emojis.push_back(new WinkingFace{ Point{700, 300}, emojiRadius });
	emojis.push_back(new SurprisedFace{ Point{900, 300}, emojiRadius });

    //Display all emojis
	for (auto emoji : emojis) {
		emoji->attach_to(win);
	}
    
	win.wait_for_button();
    return 0;
}