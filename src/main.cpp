#include <GLFW/glfw3.h>
#include <chrono>
#include <ctime>    
#include <iostream>

#include "Game.h"

int main(void) {
    auto timeElapsed = 0;
    auto lastUpdateTime = std::chrono::system_clock::now();

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(256, 256, "Game", NULL, NULL);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    Game::init();

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) {

        timeElapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - lastUpdateTime).count();
        lastUpdateTime = std::chrono::system_clock::now();

        Game::update(timeElapsed);
        Game::render(timeElapsed);

        std::cout << "Time elapsed: " << timeElapsed << " ms" << std::endl;

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}