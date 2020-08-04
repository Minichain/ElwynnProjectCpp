#include "Cube.h"

Cube::Cube() {
    center = new float[3]{0, 0, 0};
    float width = 0.5f;
    init(center, width);
}

Cube::Cube(float c[], float w) {
    init(c, w);
}

Cube::~Cube() {
    
}

void Cube::init(float c[], float w) {
    center = c;
    vertex1 = new float[3]{center[0] - w / 2, center[1] + w / 2, center[2] - w / 2};
    vertex2 = new float[3]{center[0] - w / 2, center[1] - w / 2, center[2] - w / 2};
    vertex3 = new float[3]{center[0] + w / 2, center[1] + w / 2, center[2] - w / 2};
    vertex4 = new float[3]{center[0] + w / 2, center[1] - w / 2, center[2] - w / 2};
    vertex5 = new float[3]{center[0] + w / 2, center[1] + w / 2, center[2] + w / 2};
    vertex6 = new float[3]{center[0] + w / 2, center[1] - w / 2, center[2] + w / 2};
    vertex7 = new float[3]{center[0] - w / 2, center[1] + w / 2, center[2] + w / 2};
    vertex8 = new float[3]{center[0] - w / 2, center[1] - w / 2, center[2] + w / 2};
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

void Cube::render() {
    glBegin(GL_LINE_STRIP);

    glColor3f(0, 1, 0);
    
    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);
    glVertex3f(vertex1[0], vertex1[1], vertex1[2]);
    glVertex3f(vertex3[0], vertex3[1], vertex3[2]);
    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);

    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);
    glVertex3f(vertex3[0], vertex3[1], vertex3[2]);
    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);
    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);

    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);
    glVertex3f(vertex3[0], vertex3[1], vertex3[2]);
    glVertex3f(vertex5[0], vertex5[1], vertex5[2]);
    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);

    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);
    glVertex3f(vertex5[0], vertex5[1], vertex5[2]);
    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);
    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);

    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);
    glVertex3f(vertex5[0], vertex5[1], vertex5[2]);
    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);
    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);

    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);
    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);
    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);
    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);

    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);
    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);
    glVertex3f(vertex1[0], vertex1[1], vertex1[2]);
    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);

    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);
    glVertex3f(vertex1[0], vertex1[1], vertex1[2]);
    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);
    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);

    /* TOP FACE*/

    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);
    glVertex3f(vertex3[0], vertex3[1], vertex3[2]);
    glVertex3f(vertex1[0], vertex1[1], vertex1[2]);
    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);

    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);
    glVertex3f(vertex5[0], vertex5[1], vertex5[2]);
    glVertex3f(vertex3[0], vertex3[1], vertex3[2]);
    glVertex3f(vertex7[0], vertex7[1], vertex7[2]);

    /* BOTTOM FACE*/

    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);
    glVertex3f(vertex2[0], vertex2[1], vertex2[2]);
    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);
    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);

    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);
    glVertex3f(vertex4[0], vertex4[1], vertex4[2]);
    glVertex3f(vertex6[0], vertex6[1], vertex6[2]);
    glVertex3f(vertex8[0], vertex8[1], vertex8[2]);

    glEnd();
}
