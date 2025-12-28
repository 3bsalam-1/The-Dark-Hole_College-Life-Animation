#ifndef SCENES_H
#define SCENES_H

#ifdef __APPLE__
#include "GLUT/glut.h"
#else
#include "GL/glut.h"
#endif

// Scene 0 - College Title Screen
void CollegeTitleScreen();

// Scene 1 - College Animation
void College();

// Draw functions helpers (exposed if needed, or kept internal to Scenes.cpp -
// keeping internal usually better but original code structure suggests they are
// just helpers) Since they were void functions in main, I can just declare the
// main scene functions here. But some might be useful if we want to debug. For
// now, let's keep it simple.

// Render Scene Dispatcher
void renderScene();

#endif // SCENES_H
