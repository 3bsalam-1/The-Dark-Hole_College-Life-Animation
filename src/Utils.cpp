#include "Utils.h"
#include "Globals.h" // For PI

// Function to Create Delay
void delay(float secs) {
  float end = clock() / CLOCKS_PER_SEC + secs;
  while ((clock() / CLOCKS_PER_SEC) < end)
    ;
}

// Function to Print Text
void print(char *string, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLint x,
           GLint y, GLfloat w, GLfloat h, GLfloat strokeSize) {

  glPushMatrix();

  glColor4f(r, g, b, a);
  glTranslatef(x, y, 0);
  glScalef(w, h, 0);

  glPointSize(strokeSize);
  glLineWidth(strokeSize);

  while (*string)
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, *string++);

  glPopMatrix();

  glLineWidth(1);
  glPointSize(1);
}

// Function to Draw Circle
void drawCircle(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b,
                GLfloat sx, GLfloat sy, GLfloat radius) {

  glPushMatrix();

  glTranslatef(x, y, 0);
  glScalef(sx, sy, 0);

  glBegin(GL_POLYGON);
  glColor3ub(r, g, b);
  for (GLfloat i = 0; i < 360; i += 5)
    glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
  glEnd();

  glPopMatrix();
}

// Function to Draw Semi-Circle
void drawSemiCircle(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy, GLfloat r,
                    GLfloat g, GLfloat b, GLfloat radius, GLfloat start_angle,
                    GLfloat end_angle) {
  glPushMatrix();

  glTranslatef(tx, ty, 0);
  glScalef(sx, sy, 0);

  glBegin(GL_POLYGON);
  glColor3ub(r, g, b);
  for (GLfloat i = start_angle; i < end_angle; i += 5)
    glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
  glEnd();

  glPopMatrix();
}
