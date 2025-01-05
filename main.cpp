#define GLFW_INCLUDE_VULKAN
#include <iostream>
#include<GLFW/glfw3.h>
#include <stdexcept>

using namespace std;

GLFWwindow * window;

int main()
{
    cout << "Hello World!" << endl;
    glfwInit();
    int a = 800;
    int b = 500;
    string name= "Kaustuv";

    //set GLFW to not work with OpenGL
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(a, b, name.c_str(), nullptr, nullptr);
    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
