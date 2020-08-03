#include "Cube.h"

float vertex1[3] = { -0.5, 0.5, -0.5 };
float vertex2[3] = { -0.5, -0.5, -0.5 };
float vertex3[3] = { 0.5, 0.5, -0.5 };
float vertex4[3] = { 0.5, -0.5, -0.5 };
float vertex5[3] = { 0.5, 0.5, 0.5 };
float vertex6[3] = { 0.5, -0.5, 0.5 };
float vertex7[3] = { -0.5, 0.5, 0.5 };
float vertex8[3] = { -0.5, -0.5, 0.5 };

Cube::Cube() {

}

Cube::~Cube() {
    
}

void Cube::rotate(float alpha, float beta, float gamma) {
	MathUtils::rotatePoint(vertex1, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex2, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex3, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex4, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex5, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex6, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex7, alpha, beta, gamma);
	MathUtils::rotatePoint(vertex8, alpha, beta, gamma);
}

void Cube::render() {
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
}
