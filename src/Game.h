#ifndef GAME
#define GAME

#include <GLFW/glfw3.h>
#include "Cube.h"

class Game {
	public:
		static void init();
		static void update(long timeElapsed);
		static void render(long timeElapsed);

	private:
};

#endif