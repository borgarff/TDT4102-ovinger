#include "Emoji.h"
#include <Graph_lib/Graph.h>
#include <Graph_lib/Point.h>
#include <Graph_lib/Window.h>


Face::Face(Point c, int r): faceCircle(c, r){
    faceCircle.set_color(Color::yellow);
    faceCircle.set_fill_color(Color::yellow);
    
}

void Face::attach_to(Graph_lib::Window & win) {
    win.attach(faceCircle);
}

EmptyFace::EmptyFace(Point c, int r) : Face{c, r}, 
leftEye{Point{c.x-25, c.y-15}, r/5}, rightEye{Point{c.x + 25, c.y - 15}, r/5}{
    rightEye.set_color(Color::black);
    rightEye.set_fill_color(Color::black);
    leftEye.set_color(Color::black);
    leftEye.set_fill_color(Color::black);   
}

void EmptyFace::attach_to(Graph_lib::Window &win) {
    Face::attach_to(win);
    win.attach(leftEye);
    win.attach(rightEye);
}

SmilingFace::SmilingFace(Point c, int r) : EmptyFace{c, r}, 
smile{Point {c.x, c.y}, r, r, 225, 315} {
    smile.set_color(Color::black);
}

void SmilingFace::attach_to(Graph_lib::Window &win) {
    EmptyFace::attach_to(win);
    win.attach(smile);
}

SadFace::SadFace(Point c, int r) : EmptyFace(c, r), 
sad(Point {c.x, c.y+50}, r, r, 45, 135) {
    sad.set_color(Color::black);
    sad.set_fill_color(Color::black);
}

void SadFace::attach_to(Graph_lib::Window &win) {
    EmptyFace::attach_to(win);
    win.attach(sad);
}

AngryFace::AngryFace(Point c, int r) : EmptyFace{c, r},
angry{Point {c.x, c.y+50}, r, r, 45, 135}, 
leftLine{Point {c.x-40, c.y-20}, Point {c.x-20, c.y-30}},
rightLine{Point {c.x+40, c.y-20}, Point {c.x+20,c.y-30}} {
    angry.set_color(Color::black);
    leftLine.set_color(Color::black);
    rightLine.set_color(Color::black);
}

void AngryFace::attach_to(Graph_lib::Window &win) {
    EmptyFace::attach_to(win);
    win.attach(angry);
    win.attach(leftLine);
    win.attach(rightLine);
}


WinkingFace::WinkingFace(Point c, int r) : Face{c, r}, 
leftEye{Point{c.x-25, c.y-15}, r/5}, 
rightEye{Point{c.x + 25, c.y - 5}, r/2, r/2, 45, 135}, 
smile{Point {c.x, c.y}, r, r, 225, 315} {
    rightEye.set_color(Color::black);
    rightEye.set_fill_color(Color::black);
    leftEye.set_color(Color::black);
    leftEye.set_fill_color(Color::black); 
    smile.set_color(Color::black);
}

void WinkingFace::attach_to(Graph_lib::Window &win) {
    Face::attach_to(win);
    win.attach(rightEye);
    win.attach(leftEye);
    win.attach(smile);
}

SurprisedFace::SurprisedFace(Point c, int r) : EmptyFace{c, r},
mouth{Point {c.x, c.y+20}, r/2, r/3, 0, 360} {
    mouth.set_color(Color::black);
    mouth.set_fill_color(Color::black);
}

void SurprisedFace::attach_to(Graph_lib::Window &win) {
    EmptyFace::attach_to(win);
    win.attach(mouth);
}