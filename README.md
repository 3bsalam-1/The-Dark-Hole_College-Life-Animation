# The Dark Hole - College Life Animation

![Status](https://img.shields.io/badge/Status-Completed-success)
![License](https://img.shields.io/badge/License-GPLv3-blue)
![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-lightgrey)

A 2D computer graphics animation project built with **OpenGL** and **GLUT** in C++. This project illustrates a satirical and metaphorical journey through college life, titled "The Dark Hole".

## 📖 Story Overview
The animation depicts a student's daily cycle:
1.  **Home**: Waking up and preparing.
2.  **Commute**: Traveling to college (FCISCU).
3.  **Study**: Attending classes (Othman Building).
4.  **Repeat**: The endless loop of the semester.

The project features:
-   Day/Night cycle transitions.
-   Character animation (walking, movement).
-   Interactive scene switching.
-   Dynamic color morphing (sky, windows, grass).

## 🛠 Directory Structure
The project has been restructured for modularity and maintainability:

```
Moon/
├── src/                # Source code
│   ├── main.cpp        # Entry point and event loop
│   ├── Scenes.cpp      # Scene rendering logic
│   ├── Utils.cpp       # Helper functions (drawing shapes, text)
│   └── Globals.cpp     # Shared state variables
├── resources/          # Assets (images, etc.)
├── CMakeLists.txt      # Build configuration
└── LICENSE             # GPLv3 License
```

## 🚀 Getting Started

### Prerequisites
-   **C++ Compiler** (GCC/Clang/MSVC)
-   **CMake** (version 3.10+)
-   **OpenGL** System Libraries
-   **GLUT** (FreeGLUT on Linux/Windows)

### Building the Project

**Using CMake (Recommended):**

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

**Using CodeBlocks:**
1.  Create a new Empty Project.
2.  Add all files from the `src/` directory.
3.  Link `libopengl32`, `libglu32`, and `libglut32` (on Windows).
4.  Build and Run.

## 🎮 Controls
| Key | Action |
| :--- | :--- |
| **N / n** | Next Scene |
| **B / b** | Previous Scene |
| **Q / q** | Quit Application |

## 👥 Credits
Developed as a Computer Graphics course project.
Refactored and modernized by Antigravity.

## 📄 License
This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.
