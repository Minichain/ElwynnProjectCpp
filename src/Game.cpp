#include "Game.h"

Cube cube01;
Cube cube02;
Cube cube03;
Cube cube04;
Cube cube05;

void Game::init() {
    cube01 = Cube(new float[3]{-0.45, -0.45, 0}, 0.25f);
    cube02 = Cube(new float[3]{0.45, 0.45, 0}, 0.25f);
    cube03 = Cube(new float[3]{0.45, -0.45, 0}, 0.25f);
    cube04 = Cube(new float[3]{-0.45, 0.45, 0}, 0.25f);
    cube05 = Cube();
}

void Game::update(long timeElapsed) {
    cube01.rotate(0.001f * timeElapsed, 0.00125f * timeElapsed, 0.0015f * timeElapsed);
    cube02.rotate(0.001f * timeElapsed, 0.00125f * timeElapsed, 0.0015f * timeElapsed);
    cube03.rotate(0.001f * timeElapsed, 0.00125f * timeElapsed, 0.0015f * timeElapsed);
    cube04.rotate(0.001f * timeElapsed, 0.00125f * timeElapsed, 0.0015f * timeElapsed);
    cube05.rotate(0.002f * timeElapsed, 0.00225f * timeElapsed, 0.0025f * timeElapsed);
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
