#ifndef GLOBALS_H
#define GLOBALS_H

#ifdef __APPLE__
    #include "GLUT/glut.h"
#else
    #include "GL/glut.h"
#endif

// Define the value of PI
#ifndef PI
#define PI 3.141592653589
#endif

// ID to detect which scene the story is in.
extern int SCENE_ID;

// Variables for Animator Faders
extern GLfloat CO_chap_fade;
extern GLfloat CO_title_fade;
extern GLfloat CO_subtitle_1_appear;

// Variables for Translation Animators
extern GLfloat trans_x_chap3;
extern GLfloat trans_x_title3;
extern GLfloat sun_move_left;
extern GLfloat Collegeboy_x;
extern GLfloat Collegeboy_y;

// Variables for Color Morphers
extern GLfloat window_top_r, window_top_g, window_top_b;
extern GLfloat window_bottom_r, window_bottom_g, window_bottom_b;
extern GLfloat sky_r, sky_g, sky_b;
extern GLfloat grass_r, grass_g, grass_b;
extern GLfloat sun_r, sun_g, sun_b;

// Variables for Turn-based Switching
extern bool sun_moved_half;
extern bool sun_has_set;
extern bool stars_are_made;
extern bool chapter_1_done;
extern bool chapter_2_done;
extern bool chapter_3_done;
extern bool chapter_4_done;
extern bool chapter_5_done;
extern bool othman_done;

// Variables for Random Star Generation
extern int star_alpha;
extern int no_of_stars;
extern int stars_array[100][2]; // Changed from 40 to 100 to match main.cpp loop logic if needed, but main.cpp had 40 in decl and 100 in loop. Fixing to 100 based on loop.

#endif // GLOBALS_H
