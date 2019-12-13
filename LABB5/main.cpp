#include "SDL.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <vector>

using namespace std;

void testRendering(vector<Shape*> shapes) {
	for (int i = 0; i < 3; i++) {
		//shapes[i]->render();
	}
}
/*
int main() {

	vector<Shape*> shapes;
	Rectangle a(5, 7, Point2D(1, 1), 0xff0000ff);
	Triangle b(3, 10, Point2D(1, 5), 0x00ff00ff);
	Circle c(2, Point2D(0, 0), 0x0000ffff);
	shapes.push_back(&a);
	shapes.push_back(&b);
	shapes.push_back(&c);

	testRendering(shapes);

	system("pause");
	return 0;
}
*/
int main(int argc, char *argv[]) {

	/*vector<Shape*> shapes;
	Rectangle a(5, 7, Point2D(1, 1), 0xff0000ff);
	Triangle b(3, 10, Point2D(1, 5), 0x00ff00ff);
	Circle c(2, Point2D(0, 0), 0x0000ffff);
	shapes.push_back(&a);
	shapes.push_back(&b);
	shapes.push_back(&c);*/

	//testRendering(shapes);

	Rectangle a(200, 300, Point2D(200, 100), 0xff0000ff);
	Triangle b(200, 200, Point2D(600, 600), 0x00ff00ff);
	Circle c(200, Point2D(1000, 500), 0x0000ffff);

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1600, 1080, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 100, 0, 175, 150);
	a.render(renderer);
	b.render(renderer);
	c.render(renderer);

	SDL_RenderPresent(renderer);
	SDL_Delay(3000);

	system("pause");
	return 0;
}