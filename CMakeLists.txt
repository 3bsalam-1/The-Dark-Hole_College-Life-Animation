cmake_minimum_required(VERSION 3.10)
project(TheDarkHoleCollege)

set(CMAKE_CXX_STANDARD 17)

# Find OpenGL and GLUT
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} src)

set(SOURCES
    src/main.cpp
    src/Globals.cpp
    src/Utils.cpp
    src/Scenes.cpp
)

add_executable(MoonStory ${SOURCES})

target_link_libraries(MoonStory ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})

# macOS specific framework linking if needed (usually handled by find_package but explicit for some setups)
if(APPLE)
    target_link_libraries(MoonStory "-framework OpenGL" "-framework GLUT")
endif()
