#include "Globals.h"
#include "Scenes.h"
#include "Utils.h"
#include <iostream>
#include <stdlib.h> // For exit()
#include <unistd.h>


// Animator Updation Function
void update(int) {

  // High College Title Screen
  if (SCENE_ID == 0) {
    if (trans_x_chap3 < 100)
      trans_x_chap3 += 1;

    if (trans_x_title3 < 100)
      trans_x_title3 += 1;

    if (CO_chap_fade < 1)
      CO_chap_fade += .01;

    if (CO_title_fade < 1)
      CO_title_fade += .01;
  }

  // High College
  if (SCENE_ID == 1) {
    if (!chapter_1_done) {
      delay(1);
      Collegeboy_y -= 5000;
      chapter_1_done = true;
    }

    if (chapter_1_done && !chapter_2_done) {
      if (Collegeboy_x >= 300) {
        Collegeboy_x -= 5;
      } else {
        Collegeboy_y += 5000;
        chapter_2_done = true;
      }
    }

    if (chapter_1_done && chapter_2_done && !chapter_3_done && !sun_has_set) {
      if (sun_r <= 255)
        sun_r += .25;
      if (sun_g <= 255)
        sun_g += .25;
      if (sun_b <= 255)
        sun_b += .25;

      if (star_alpha <= 200)
        star_alpha += 1;

      if (grass_r <= 255)
        grass_r += .25;
      if (grass_g <= 220)
        grass_g += .25;
      if (grass_b >= 65)
        grass_b += .25;

      if (window_top_r <= 255)
        window_top_r += .25;
      if (window_top_g <= 220)
        window_top_g += .25;
      if (window_top_b >= 65)
        window_top_b -= .25;

      if (window_bottom_r <= 255)
        window_bottom_r += .25;
      if (window_bottom_g <= 220)
        window_bottom_g += .25;
      if (window_bottom_b >= 65)
        window_bottom_b -= .25;

      if (sky_r <= 0)
        sky_r += .25;
      if (sky_g >= 0)
        sky_g -= .25;
      if (sky_b >= 0)
        sky_b -= .25;

      if (sun_move_left < 1100)
        sun_move_left += 1.5;
      else
        sun_has_set = true;

      if (sun_move_left > 500)
        sun_moved_half = true;
    }

    if (sun_moved_half && !chapter_4_done) {
      if (Collegeboy_y != 220)
        Collegeboy_y -= 5000;

      if (Collegeboy_x >= -1000)
        Collegeboy_x -= 5;
      else {
        Collegeboy_y += 5000;
        chapter_4_done = true;
      }
    }

    if (chapter_4_done) {
      if (Collegeboy_y != 5220 && !othman_done) {
        Collegeboy_y += 5000;
        othman_done = true;
      }
    }

    if (sun_has_set) {
      if (Collegeboy_y != 220)
        Collegeboy_y -= 5000;
      chapter_5_done = true;
    }

    if (chapter_5_done) {
      if (Collegeboy_x <= 1150)
        Collegeboy_x += 5;
      else {
        if (Collegeboy_y != 5220)
          Collegeboy_y += 5000;
      }

      if (CO_subtitle_1_appear < 1) {
        CO_subtitle_1_appear += .005;
      }
    }
  }

  // Recalls the Display Function
  glutPostRedisplay();

  // Creates a Timer of 25ms
  glutTimerFunc(25, update, 0);
}

// Keyboard Action
void keyPress(unsigned char key, int x, int y) {
  switch (key) {
  // Go to Previous Scene
  case 'b':
  case 'B':
    if (SCENE_ID == 0)
      break;
    SCENE_ID--;
    break;
  // Go to Next Scene
  case 'n':
  case 'N':
    if (SCENE_ID == 1)
      break;
    SCENE_ID++;
    break;
  // Quit Story
  case 'q':
  case 'Q':
    exit(0);
    break;
  default:
    break;
  }

  glutPostRedisplay();
}

// Function to Initialize Screen
void initializeScreen() {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0, 1400, 0, 800);
}

// Main Function
int main(int argc, char **argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutInitWindowPosition(0, 0);
  glutInitWindowSize(1400, 800);
  glutCreateWindow("The Epilogue of Education");

  // Enables Transparency
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glEnable(GL_BLEND);

  // Enable Smoothening
  glEnable(GL_LINE_SMOOTH);
  glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

  // Display Function
  glutDisplayFunc(renderScene);

  // Input Function
  glutKeyboardFunc(keyPress);

  initializeScreen();

  // Timer Function
  // every 25 milliseconds, update function is called
  glutTimerFunc(25, update, 0);

  glutMainLoop();

  return 0;
}
