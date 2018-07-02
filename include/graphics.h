//
// Created by Jacob Austin on 5/29/18.
//

#ifdef GRAPHICS
#ifndef LOCH_GRAPHICS_H
#define LOCH_GRAPHICS_H

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
using namespace glm;

glm::mat4 getProjection();

#endif //LOCH_GRAPHICS_H
#endif