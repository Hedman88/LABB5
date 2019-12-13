#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(float base, float height, Point2D position, unsigned int RGBA) : Shape(position, RGBA)
{
	this->base = base;
	this->height = height;
}


Triangle::~Triangle()
{
}

void Triangle::render(SDL_Renderer *renderer) {
	cout << endl << "---Triangle---" << endl << "Position: " << position.toString() << endl << "Base: " << base << endl << "Height: " << height << endl;
	SDL_SetRenderDrawColor(renderer, 100, 0, 175, 150);
	SDL_RenderDrawLineF(renderer, position.getX(), position.getY(), position.getX() + base / 2, position.getY() + height);
	SDL_RenderDrawLineF(renderer, position.getX() + base / 2, position.getY() + height, position.getX() - base / 2, position.getY() + height);
	SDL_RenderDrawLineF(renderer, position.getX() - base / 2, position.getY() + height, position.getX(), position.getY());
}

const float Triangle::getBase() {
	return base;
}
const float Triangle::getHeight() {
	return height;
}
void Triangle::setBase(float width) {
	this->base = base;
}
void Triangle::setHeight(float height) {
	this->height = height;
}