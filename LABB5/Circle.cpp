#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle(float radius, Point2D position, unsigned int RGBA) : Shape(position, RGBA)
{
	this->radius = radius;
}


Circle::~Circle()
{
}

void Circle::render(SDL_Renderer *renderer) {
	cout << endl << "---Circle---" << endl << "Position: " << position.toString() << endl << "Radius: " << radius << endl;
	SDL_SetRenderDrawColor(renderer, 100, 0, 175, 150);
	int k = 50;
	for (int i = 0; i < k; i++) {
		SDL_RenderDrawLineF(renderer, 
			sqrtf(pow(radius, 2) - pow(((radius/k)*(i + 1))-(position.getY()+radius),2)) + (position.getY()+radius),
			position.getY() + i * 10, 
			sqrtf(pow(radius, 2) - pow(((radius / k)*(i + 2)) - (position.getY() + radius), 2)) + (position.getY() + radius),
			position.getY() + (i+1) * 10);
	}
}

const float Circle::getRadius() {
	return radius;
}
void Circle::setRadius(float width) {
	this->radius = radius;
}
