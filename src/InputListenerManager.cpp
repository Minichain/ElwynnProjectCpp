#include "InputListenerManager.h"

bool wKeyPressed;
bool aKeyPressed;
bool sKeyPressed;
bool dKeyPressed;

void InputListenerManager::init(GLFWwindow* window) {
    glfwSetKeyCallback(window, keyCallback);
}

void InputListenerManager::keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_W) {
        std::cout << "GLFW_KEY_W pressed!" << std::endl;
        wKeyPressed = action == GLFW_PRESS || action == GLFW_REPEAT;
    }
    else if (key == GLFW_KEY_A) {
        std::cout << "GLFW_KEY_A pressed!" << std::endl;
        aKeyPressed = action == GLFW_PRESS || action == GLFW_REPEAT;
    }
    else if (key == GLFW_KEY_S) {
        std::cout << "GLFW_KEY_S pressed!" << std::endl;
        sKeyPressed = action == GLFW_PRESS || action == GLFW_REPEAT;
    }
    else if (key == GLFW_KEY_D) {
        std::cout << "GLFW_KEY_D pressed!" << std::endl;
        dKeyPressed = action == GLFW_PRESS || action == GLFW_REPEAT;
    }
}

bool InputListenerManager::isWKeyPressed() {
    return wKeyPressed;
}

bool InputListenerManager::isAKeyPressed() {
    return aKeyPressed;
}

bool InputListenerManager::isSKeyPressed() {
    return sKeyPressed;
}

bool InputListenerManager::isDKeyPressed() {
    return dKeyPressed;
}