#include "Cube.h"

Cube::Cube() {
    center = new Coordinates(0, 0, 0);
    float width = 0.5f;
    init(center, width);
}

Cube::Cube(Coordinates *center_, float width_) {
    init(center_, width_);
}

Cube::~Cube() {
    
}

void Cube::init(Coordinates *center_, float width_) {
    center = center_;
    vertices = (Coordinates*) malloc(NUM_OF_VERTICES * sizeof(Coordinates));;
    vertices[0] = Coordinates(center->x - width_ / 2, center->y + width_ / 2, center->z - width_ / 2);
    vertices[1] = Coordinates(center->x - width_ / 2, center->y - width_ / 2, center->z - width_ / 2);
    vertices[2] = Coordinates(center->x + width_ / 2, center->y + width_ / 2, center->z - width_ / 2);
    vertices[3] = Coordinates(center->x + width_ / 2, center->y - width_ / 2, center->z - width_ / 2);
    vertices[4] = Coordinates(center->x + width_ / 2, center->y + width_ / 2, center->z + width_ / 2);
    vertices[5] = Coordinates(center->x + width_ / 2, center->y - width_ / 2, center->z + width_ / 2);
    vertices[6] = Coordinates(center->x - width_ / 2, center->y + width_ / 2, center->z + width_ / 2);
    vertices[7] = Coordinates(center->x - width_ / 2, center->y - width_ / 2, center->z + width_ / 2);
}

void Cube::rotate(float alpha, float beta, float gamma) {
    for (int i = 0; i < NUM_OF_VERTICES; i++) {
        MathUtils::rotatePoint(&vertices[i], center, alpha, beta, gamma);
    }
}

void Cube::translate(float x_, float y_, float z_) {
    for (int i = 0; i < NUM_OF_VERTICES; i++) {
        vertices[i].translate(x_, y_, z_);
    }
}

void Cube::render() {
    glBegin(GL_LINE_STRIP);

    glColor3f(0, 1, 0);
    
    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);
    glVertex3f(vertices[0].x, vertices[0].y, vertices[0].z);
    glVertex3f(vertices[2].x, vertices[2].y, vertices[2].z);
    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);

    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);
    glVertex3f(vertices[2].x, vertices[2].y, vertices[2].z);
    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);
    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);

    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);
    glVertex3f(vertices[2].x, vertices[2].y, vertices[2].z);
    glVertex3f(vertices[4].x, vertices[4].y, vertices[4].z);
    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);

    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);
    glVertex3f(vertices[4].x, vertices[4].y, vertices[4].z);
    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);
    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);

    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);
    glVertex3f(vertices[4].x, vertices[4].y, vertices[4].z);
    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);
    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);

    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);
    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);
    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);
    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);

    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);
    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);
    glVertex3f(vertices[0].x, vertices[0].y, vertices[0].z);
    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);

    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);
    glVertex3f(vertices[0].x, vertices[0].y, vertices[0].z);
    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);
    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);

    ///* TOP FACE*/

    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);
    glVertex3f(vertices[2].x, vertices[2].y, vertices[2].z);
    glVertex3f(vertices[0].x, vertices[0].y, vertices[0].z);
    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);

    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);
    glVertex3f(vertices[4].x, vertices[4].y, vertices[4].z);
    glVertex3f(vertices[2].x, vertices[2].y, vertices[2].z);
    glVertex3f(vertices[6].x, vertices[6].y, vertices[6].z);

    ///* BOTTOM FACE*/

    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);
    glVertex3f(vertices[1].x, vertices[1].y, vertices[1].z);
    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);
    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);

    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);
    glVertex3f(vertices[3].x, vertices[3].y, vertices[3].z);
    glVertex3f(vertices[5].x, vertices[5].y, vertices[5].z);
    glVertex3f(vertices[7].x, vertices[7].y, vertices[7].z);

    glEnd();
}
