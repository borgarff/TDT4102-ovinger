#pragma once

// Include Graph_lib library files that holds declarations needed for Window,
// and Shape derivatives.
#include "Graph_lib/Graph.h"
#include "Graph_lib/GUI.h"
#include <Graph_lib/Point.h>
#include <Graph_lib/Window.h>
#include "Graph_lib/Simple_window.h"



using namespace Graph_lib;

// An abstract class. Concrete classes derived from this base class
// has to implement the member function attach_to().
class Emoji {
public:
	// Disable copying. Disable slicing, etc.
	Emoji(const Emoji&) = delete;
	Emoji& operator=(const Emoji&) = delete;

	// Deleting the copy constructor also deletes the default constructor.
	// Emoji needs a default constructor.
	Emoji() {}
	// Emoji() = default; // is an alternative way of achieving the same.

	// The pure virtual function that has to be overriden for a deriving class
	// to be instantiable. Every class deriving from Emoji is supposed to
	// attach all its Shapes to a window. This makes the class abstract.
	virtual void attach_to(Graph_lib::Window&) = 0;

	// Relevant because Vector_ref can own Emojis and automatically cleans up.
	// Subject will be visited later in the course.
	virtual ~Emoji() {}
};

class Face : public Emoji {
	private:
	Circle faceCircle;
	public:
	Face(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};


class EmptyFace : public Face {
	private:
	Circle leftEye;
	Circle rightEye;
	public:
	EmptyFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class SmilingFace : public EmptyFace {
	private:
	Arc smile;
	public:
	SmilingFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class SadFace : public EmptyFace {
	private:
	Arc sad;
	public:
	SadFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class AngryFace : public EmptyFace {
	private:
	Line leftLine;
	Line rightLine;
	Arc angry;
	public:
	AngryFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class WinkingFace : public Face {
	private:
	Circle leftEye;
	Arc rightEye;
	Arc smile;
	public:
	WinkingFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class SurprisedFace : public EmptyFace {
	private:
	Arc mouth;
	public:
	SurprisedFace(Point c, int r);
	virtual void attach_to(Graph_lib::Window& win) override;
};