#include "Game.h"

Cube* cubes;

void Game::init(GLFWwindow *window) {
    InputListenerManager::init(window);

    cubes = (Cube*) malloc(NUM_OF_CUBES * sizeof(Cube));;

    cubes[0] = Cube(new Coordinates(-0.45, -0.45, 0), 0.25f);
    cubes[1] = Cube(new Coordinates(0.45, 0.45, 0), 0.25f);
    cubes[2] = Cube(new Coordinates(0.45, -0.45, 0), 0.25f);
    cubes[3] = Cube(new Coordinates(-0.45, 0.45, 0), 0.25f);
    cubes[4] = Cube();
}

void Game::update(long timeElapsed) {
    float alpha = 0;
    float beta = 0;
    float gamma = 0;

    if (InputListenerManager::isWKeyPressed()) {
        gamma += 0.001f * timeElapsed;
    }
    if (InputListenerManager::isAKeyPressed()) {
        beta += 0.001f * timeElapsed;
    }
    if (InputListenerManager::isSKeyPressed()) {
        gamma += -0.001f * timeElapsed;
    }
    if (InputListenerManager::isDKeyPressed()) {
        beta += -0.001f * timeElapsed;
    }

    for (int i = 0; i < NUM_OF_CUBES; i++) {
        cubes[i].rotate(alpha, beta, gamma);
    }

    float translation[3] = {0, 0, 0};

    if (InputListenerManager::isQKeyPressed()) {
        translation[0] += -0.001f * timeElapsed;
    }

    if (InputListenerManager::isEKeyPressed()) {
        translation[0] += 0.001f * timeElapsed;
    }

    for (int i = 0; i < NUM_OF_CUBES; i++) {
        cubes[i].translate(translation[0], translation[1], translation[2]);
    }
}

void Game::render(long timeElapsed) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 5; i++) {
        cubes[i].render();
    }
}