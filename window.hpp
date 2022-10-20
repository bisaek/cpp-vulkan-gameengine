#pragma once
#define GlFW_INCLUDE_VULKAN

#include <string>
#include <GLFW/glfw3.h>

namespace lve
{
    class LveWindow
    {
        public:
        LveWindow(int w, int h, std::string namez);
        ~LveWindow();
        private:
        void initWindow();
        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;
    }
}