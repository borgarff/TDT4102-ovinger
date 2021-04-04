#pragma once
#include "Graph_lib/GUI.h"

using namespace Graph_lib;

//De forskjellige tilstandene en Tile kan vaere i
enum class Cell { closed, open, flagged };

class Tile : public Button {
	Cell state = Cell::closed;

	void set_label(string s) { label = s; redraw(); }
	void set_label_color(Color c) { pw->labelcolor(c.as_int()); redraw();}
public:
	Tile(Point pos, int size, Graph_lib::Callback cb)
		:Button{pos, size, size, "", cb} {};
	
	Cell getState() const {return state; };

	void open();
	void flag();
	bool getIsMine() const;
	void setIsMine();
	void setAdjMines(int n);

	private:
	bool isMine = false;
};
