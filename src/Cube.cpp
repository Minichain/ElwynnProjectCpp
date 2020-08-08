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
    vertex1 = new Coordinates(center->x - width_ / 2, center->y + width_ / 2, center->z - width_ / 2);
    vertex2 = new Coordinates(center->x - width_ / 2, center->y - width_ / 2, center->z - width_ / 2);
    vertex3 = new Coordinates(center->x + width_ / 2, center->y + width_ / 2, center->z - width_ / 2);
    vertex4 = new Coordinates(center->x + width_ / 2, center->y - width_ / 2, center->z - width_ / 2);
    vertex5 = new Coordinates(center->x + width_ / 2, center->y + width_ / 2, center->z + width_ / 2);
    vertex6 = new Coordinates(center->x + width_ / 2, center->y - width_ / 2, center->z + width_ / 2);
    vertex7 = new Coordinates(center->x - width_ / 2, center->y + width_ / 2, center->z + width_ / 2);
    vertex8 = new Coordinates(center->x - width_ / 2, center->y - width_ / 2, center->z + width_ / 2);
}

void Cube::rotate(float alpha, float beta, float gamma) {
    MathUtils::rotatePoint(vertex1, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex2, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex3, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex4, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex5, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex6, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex7, center, alpha, beta, gamma);
    MathUtils::rotatePoint(vertex8, center, alpha, beta, gamma);
}

void Cube::translate(float x_, float y_, float z_) {
    vertex1->translate(x_, y_, z_);
    vertex2->translate(x_, y_, z_);
    vertex3->translate(x_, y_, z_);
    vertex4->translate(x_, y_, z_);
    vertex5->translate(x_, y_, z_);
    vertex6->translate(x_, y_, z_);
    vertex7->translate(x_, y_, z_);
    vertex8->translate(x_, y_, z_);
}

void Cube::render() {
    glBegin(GL_LINE_STRIP);

    glColor3f(0, 1, 0);
    
    glVertex3f(vertex2->x, vertex2->y, vertex2->z);
    glVertex3f(vertex1->x, vertex1->y, vertex1->z);
    glVertex3f(vertex3->x, vertex3->y, vertex3->z);
    glVertex3f(vertex2->x, vertex2->y, vertex2->z);

    glVertex3f(vertex2->x, vertex2->y, vertex2->z);
    glVertex3f(vertex3->x, vertex3->y, vertex3->z);
    glVertex3f(vertex4->x, vertex4->y, vertex4->z);
    glVertex3f(vertex2->x, vertex2->y, vertex2->z);

    glVertex3f(vertex4->x, vertex4->y, vertex4->z);
    glVertex3f(vertex3->x, vertex3->y, vertex3->z);
    glVertex3f(vertex5->x, vertex5->y, vertex5->z);
    glVertex3f(vertex4->x, vertex4->y, vertex4->z);

    glVertex3f(vertex4->x, vertex4->y, vertex4->z);
    glVertex3f(vertex5->x, vertex5->y, vertex5->z);
    glVertex3f(vertex6->x, vertex6->y, vertex6->z);
    glVertex3f(vertex4->x, vertex4->y, vertex4->z);

    glVertex3f(vertex6->x, vertex6->y, vertex6->z);
    glVertex3f(vertex5->x, vertex5->y, vertex5->z);
    glVertex3f(vertex7->x, vertex7->y, vertex7->z);
    glVertex3f(vertex6->x, vertex6->y, vertex6->z);

    glVertex3f(vertex6->x, vertex6->y, vertex6->z);
    glVertex3f(vertex7->x, vertex7->y, vertex7->z);
    glVertex3f(vertex8->x, vertex8->y, vertex8->z);
    glVertex3f(vertex6->x, vertex6->y, vertex6->z);

    glVertex3f(vertex8->x, vertex8->y, vertex8->z);
    glVertex3f(vertex7->x, vertex7->y, vertex7->z);
    glVertex3f(vertex1->x, vertex1->y, vertex1->z);
    glVertex3f(vertex8->x, vertex8->y, vertex8->z);

    glVertex3f(vertex8->x, vertex8->y, vertex8->z);
    glVertex3f(vertex1->x, vertex1->y, vertex1->z);
    glVertex3f(vertex2->x, vertex2->y, vertex2->z);
    glVertex3f(vertex8->x, vertex8->y, vertex8->z);

    /* TOP FACE*/

    glVertex3f(vertex7->x, vertex7->y, vertex7->z);
    glVertex3f(vertex3->x, vertex3->y, vertex3->z);
    glVertex3f(vertex1->x, vertex1->y, vertex1->z);
    glVertex3f(vertex7->x, vertex7->y, vertex7->z);

    glVertex3f(vertex7->x, vertex7->y, vertex7->z);
    glVertex3f(vertex5->x, vertex5->y, vertex5->z);
    glVertex3f(vertex3->x, vertex3->y, vertex3->z);
    glVertex3f(vertex7->x, vertex7->y, vertex7->z);

    /* BOTTOM FACE*/

    glVertex3f(vertex8->x, vertex8->y, vertex8->z);
    glVertex3f(vertex2->x, vertex2->y, vertex2->z);
    glVertex3f(vertex4->x, vertex4->y, vertex4->z);
    glVertex3f(vertex8->x, vertex8->y, vertex8->z);

    glVertex3f(vertex8->x, vertex8->y, vertex8->z);
    glVertex3f(vertex4->x, vertex4->y, vertex4->z);
    glVertex3f(vertex6->x, vertex6->y, vertex6->z);
    glVertex3f(vertex8->x, vertex8->y, vertex8->z);

    glEnd();
}
