#include "Game.h"

Cube cube;

void Game::init() {
    cube = Cube();
}

void Game::update(long timeElapsed) {
    float alpha = 0.0005 * timeElapsed, beta = 0.00075 * timeElapsed, gamma = 0.001 * timeElapsed;
    cube.rotate(alpha, beta, gamma);
}

void Game::render(long timeElapsed) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_STRIP);

    glColor3f(1, 1, 1);

    cube.render();

    glEnd();
}
