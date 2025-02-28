// vcpkg integration will make these headers available
#include <SDL3/SDL.h>
#include <GL/glew.h>
#include <cstdlib>
#include "window.h"
#include <iostream>

namespace game
{

    // Crappy little RAII window
    class GameWindow
    {
    public:
        GameWindow(const char *title, int width, int height)
        {
            SDL_Window *window;
            SDL_Init(SDL_INIT_VIDEO);

            window = SDL_CreateWindow(
                title,
                width,
                height,
                SDL_WINDOW_OPENGL);

            if (window == NULL)
            {
                SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
                abort(); // TODO: Use a better crash function
            }

            SDL_GLContext glContext = SDL_GL_CreateContext(window);
            if (glContext == nullptr)
            {
                SDL_LogError(SDL_LOG_CATEGORY_ERROR, "SDL_GLContext could not be created");
                abort(); // TODO: Use a better crash function
            }

            // Opengl extension management
            GLenum error = glewInit();
            if (error != GLEW_OK)
            {
                SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not initialize glew");
                abort();
            }
        }
    };

    int launchWindow()
    {

        GameWindow window("HELLO WORLD", 640, 480);

        while (true)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_EVENT_QUIT)
                {
                    std::cout << "Quitting..." << std::endl;
                    return 1;
                }
            }

            SDL_Delay(10); // Keep CPU nice and cool ^-^

            // TODO: Everything else :)
            // ...
        }

        return 0;
    }
} // namespace game