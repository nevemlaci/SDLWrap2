//
// Created by nevemlaci on 21/06/2024.
//

#include "cppSDLWindow.hpp"

SDL::Window::Window(const char* title, const int w, const int h, SDL_WindowFlags flags):
    m_window(SDL_CreateWindow(title, w, h, flags)){}

SDL::Window::~Window(){
    SDL_DestroyWindow(m_window);
}

SDL::RendererWindow::~RendererWindow(){
    SDL_DestroyRenderer(m_renderer);
}
