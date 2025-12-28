# 🌕 The Dark Hole - College Life Animation

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B)](https://isocpp.org/)
[![Graphics](https://img.shields.io/badge/Graphics-OpenGL-5586A4?logo=opengl)](https://www.opengl.org/)
[![Library](https://img.shields.io/badge/Library-FreeGLUT-green)](http://freeglut.sourceforge.net/)
[![Build](https://img.shields.io/badge/Build-CMake-064F8C?logo=cmake)](https://cmake.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Completed-success)]()

A comprehensive **2D Computer Graphics** project built with **OpenGL** and **C++**. This project illustrates a satirical and metaphorical journey through college life, titled *"The Dark Hole"*, featuring dynamic animations, day-night cycles, and interactive scene storytelling.

## ✨ Features

- 🎭 **Story-Driven Narrative** - Follows a student's daily cycle from home to college and back.
- 🌓 **Day/Night Cycle** - Smooth, mathematical transitions between day and night states.
- 🎨 **Dynamic Color Morphing** - Real-time color interpolation for sky, windows, and grass elements.
- 🏗️ **Geometric Modeling** - Complex scenes (College, Othman Building, Home) constructed from primitive shapes.
- 🚶 **Character Animation** - Hierarchical modeling for character movement and interactions.
- 🌟 **Procedural Generation** - Randomized star generation for night scenes.
- ⚡ **Optimized Rendering** - Efficient scene management and rendering callbacks.

## 🛠️ Technology Stack

| Technology | Purpose |
|------------|---------|
| **C++** | Core logic and control flow |
| **OpenGL** | Low-level 2D graphics rendering |
| **GLUT / FreeGLUT** | Window management and input handling |
| **CMake** | Cross-platform build system |
| **MinGW-w64** | GCC Compiler for Windows |
| **CodeBlocks** | IDE Project integration |

## 📁 Project Structure

```
Moon/
├── 📄 README.md                    # Project documentation
├── 📄 LICENSE                      # GNU GPLv3 License
├── 📄 CMakeLists.txt               # CMake build configuration
├── 📄 Moon.cbp                     # CodeBlocks project file
├── 📄 .gitignore                   # Git ignore patterns
│
├── 📂 src/                         # Source code
│   ├── main.cpp                    # Entry point & Event loop
│   ├── Scenes.h / .cpp             # Scene rendering (College, Title)
│   ├── Utils.h / .cpp              # Drawing helpers & Math utils
│   └── Globals.h / .cpp            # State management & Constants
│
└── 📂 resources/                   # Assets
    └── background.jpg              # Texture assets
```

## 🚀 Quick Start

### Prerequisites

- C++ Compiler (GCC/Clang/MSVC)
- CMake (3.10+) or CodeBlocks
- OpenGL & GLUT Libraries

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/3bsalam-1/Moon.git
   cd Moon
   ```

2.  **Build using CMake** (Recommended)
    ```bash
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

    *Alternatively, open `Moon.cbp` in CodeBlocks.*

### Running the Project

**From Command Line:**
```bash
./MoonStory.exe
```

**From CodeBlocks:**
Click the **Build and Run** button (F9).

## 🎮 Controls

| Key | Action | Description |
|-----|--------|-------------|
| **N / n** | Next Scene | Proceeds to the next chapter of the story |
| **B / b** | Previous Scene | Goes back to the previous chapter |
| **Q / q** | Quit | Exits the application |

## 🔧 Development

### Manual Compilation (MinGW)

If you prefer compiling directly from the terminal without CMake:

```bash
g++ src/main.cpp src/Globals.cpp src/Utils.cpp src/Scenes.cpp -Isrc -o MoonStory.exe -lfreeglut -lopengl32 -lglu32
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. **Fork the repository**
2. **Create a feature branch**: `git checkout -b feature/NewScene`
3. **Commit your changes**: `git commit -m 'Add new scene'`
4. **Push to the branch**: `git push origin feature/NewScene`
5. **Open a Pull Request**

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

## 👤 Author

**Ahmed Abdulsalam**
- GitHub: [@3bsalam-1](https://github.com/3bsalam-1)
- LinkedIn: [Ahmed Abdulsalam](https://linkedin.com/in/ahmed-abdulsalam1)

## 🙏 Acknowledgments

- **FreeGLUT** for the windowing toolkit.
- **OpenGL** for the graphics API.
- Course instructors for the project inspiration.

---

<div align="center">

**⭐ Star this repository if you enjoyed the animation!**

Made with ❤️ by Ahmed Abdulsalam

</div>
