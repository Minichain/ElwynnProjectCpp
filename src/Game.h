#ifndef GAME
#define GAME

#include <GLFW/glfw3.h>
#include <iostream>
#include "Cube.h"
#include "InputListenerManager.h"

class Game {
	static const int NUM_OF_CUBES = 5;

public:
	static void init(GLFWwindow *window);
	static void update(long timeElapsed);
	static void render(long timeElapsed);

private:
};

#endif