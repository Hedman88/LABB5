#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(float width, float height, Point2D position, unsigned int RGBA) : Shape(position, RGBA)
{
	this->width = width;
	this->height = height;
}


Rectangle::~Rectangle()
{
}

void Rectangle::render(SDL_Renderer *renderer) {
	cout << endl << "---Rectangle---" << endl << "Position: " << position.toString() << endl << "Width: " << width << endl << "Height: " << height << endl;
	SDL_SetRenderDrawColor(renderer, 100, 0, 175, 150);
	SDL_RenderDrawLineF(renderer, position.getX(), position.getY(), position.getX() + width, position.getY());
	SDL_RenderDrawLineF(renderer, position.getX() + width, position.getY(), position.getX() + width, position.getY() + height);
	SDL_RenderDrawLineF(renderer, position.getX() + width, position.getY() + height, position.getX(), position.getY() + height);
	SDL_RenderDrawLineF(renderer, position.getX(), position.getY() + height, position.getX(), position.getY());
}

const float Rectangle::getWidth() {
	return width;
}
const float Rectangle::getHeight() {
	return height;
}
void Rectangle::setWidth(float width) {
	this->width = width;
}
void Rectangle::setHeight(float height) {
	this->height = height;
}