#ifndef MAIN_H
#define MAIN_H

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <stdlib.h>
#include <stdio.h>
#include "starsystem/starsystem.h"
#include "starsystem/planet.h"
#include "camera/camera.h"
#include "graphics/framebuffer.h"
#include "geometry/geometry.h"
#include "player.h"
#include "graphics/skybox.h"


typedef struct scene {
    int window_width;
    int window_height;
	unsigned int framebuffer_id;
    unsigned int texture_id;
} scene;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);

#endif