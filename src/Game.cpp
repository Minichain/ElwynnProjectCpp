#include "Game.h"

Cube cube01, cube02, cube03, cube04, cube05;

void Game::init(GLFWwindow *window) {
    InputListenerManager::init(window);

    cube01 = Cube(new float[3]{-0.45, -0.45, 0}, 0.25f);
    cube02 = Cube(new float[3]{0.45, 0.45, 0}, 0.25f);
    cube03 = Cube(new float[3]{0.45, -0.45, 0}, 0.25f);
    cube04 = Cube(new float[3]{-0.45, 0.45, 0}, 0.25f);
    cube05 = Cube();
}

void Game::update(long timeElapsed) {
    float alpha = 0;
    float beta = 0;
    float gamma = 0;
    if (InputListenerManager::isWKeyPressed()) {
        gamma = 0.001f * timeElapsed;
    }
    if (InputListenerManager::isAKeyPressed()) {
        beta = 0.001f * timeElapsed;
    }
    if (InputListenerManager::isSKeyPressed()) {
        gamma = -0.001f * timeElapsed;
    }
    if (InputListenerManager::isDKeyPressed()) {
        beta = -0.001f * timeElapsed;
    }

    cube01.rotate(alpha, beta, gamma);
    cube02.rotate(alpha, beta, gamma);
    cube03.rotate(alpha, beta, gamma);
    cube04.rotate(alpha, beta, gamma);
    cube05.rotate(alpha, beta, gamma);

}

void Game::render(long timeElapsed) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    cube01.render();
    cube02.render();
    cube03.render();
    cube04.render();
    cube05.render();
}