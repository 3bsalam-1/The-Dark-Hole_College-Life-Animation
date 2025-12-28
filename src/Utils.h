#ifndef UTILS_H
#define UTILS_H

#ifdef __APPLE__
#include "GLUT/glut.h"
#else
#include "GL/glut.h"
#endif

#include <math.h>
#include <time.h>


// Initialize random seed (if needed, but usually done in main)
// void initRandom();

// Function to Create Delay
void delay(float secs);

// Function to Print Text
void print(char *string, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLint x,
           GLint y, GLfloat w, GLfloat h, GLfloat strokeSize);

// Function to Draw Circle
void drawCircle(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b,
                GLfloat sx, GLfloat sy, GLfloat radius);

// Function to Draw Semi-Circle
void drawSemiCircle(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy, GLfloat r,
                    GLfloat g, GLfloat b, GLfloat radius, GLfloat start_angle,
                    GLfloat end_angle);

#endif // UTILS_H
