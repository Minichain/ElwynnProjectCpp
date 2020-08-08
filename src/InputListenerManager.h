#ifndef INPUT_LISTENER_MANAGER
#define INPUT_LISTENER_MANAGER

#include <GLFW/glfw3.h>
#include <iostream>

class InputListenerManager {
public:
	static void init(GLFWwindow* window);
	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
	static bool isWKeyPressed();
	static bool isAKeyPressed();
	static bool isSKeyPressed();
	static bool isDKeyPressed();

private:
};

#endif