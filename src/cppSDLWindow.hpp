//
// Created by nevemlaci on 21/06/2024.
//

#ifndef CPPSDLWINDOW_HPP
#define CPPSDLWINDOW_HPP

#include <SDL3/SDL.h>

namespace SDL{
    class Window{
    protected:
        SDL_Window* m_window;

    public:
        /**
         *
         * @param title Constructs a new window
         * @param w Width
         * @param h Height
         * @param flags
         */
        Window(const char* title, const int w, const int h, SDL_WindowFlags flags = 0);

        /**
         * This constructor should not be called by the user! This constructor is used by SDL::RendererWindow
         */
        inline Window() :
            m_window(nullptr){}

        virtual ~Window();
    };

    class RendererWindow : public Window{
        SDL_Renderer* m_renderer = nullptr;

    public:
        RendererWindow(const char* title, const int w, const int h, SDL_WindowFlags flags){
            SDL_CreateWindowAndRenderer(title, w, h, flags, &m_window, &m_renderer);
        }

        virtual ~RendererWindow();
    };
}


#endif //CPPSDLWINDOW_HPP
