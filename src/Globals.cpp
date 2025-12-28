#include "Globals.h"

// ID to detect which scene the story is in.
int SCENE_ID = 0;

// Variables for Animator Faders
GLfloat CO_chap_fade = 0;
GLfloat CO_title_fade = 0;
GLfloat CO_subtitle_1_appear = 0;

// Variables for Translation Animators
GLfloat trans_x_chap3 = 0;
GLfloat trans_x_title3 = 0;
GLfloat sun_move_left = 0;
GLfloat Collegeboy_x = 1150;
GLfloat Collegeboy_y = 5220;

// Variables for Color Morphers
GLfloat window_top_r = 59, window_top_g = 91, window_top_b = 132;
GLfloat window_bottom_r = 97, window_bottom_g = 131, window_bottom_b = 159;
GLfloat sky_r = 12, sky_g = 172, sky_b = 232;
GLfloat grass_r = 82, grass_g = 163, grass_b = 42;
GLfloat sun_r = 251, sun_g = 255, sun_b = 163;

// Variables for Turn-based Switching
bool sun_moved_half = false;
bool sun_has_set = false;
bool stars_are_made = false;
bool chapter_1_done = false;
bool chapter_2_done = false;
bool chapter_3_done = false;
bool chapter_4_done = false;
bool chapter_5_done = false;
bool othman_done = false;

// Variables for Random Star Generation
int star_alpha = 0;
int no_of_stars = 0;
int stars_array[100][2];
