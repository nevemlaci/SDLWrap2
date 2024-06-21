//
// Created by nevemlaci on 20/06/2024.
//

#define SDL_MAIN_HANDLED
#include "SDL3/SDL.h"
#include <iostream>
#include "../src/cppSDL.hpp"

void run(){
    SDL::Event event{};
    SDL::RendererWindow window("", 100, 100, 0);
    while (true) {
        while (event.Poll()) {
            switch (event.GetType()) {
                case SDL_EventType::SDL_EVENT_KEY_DOWN:
                    std::cerr << "Key Down\n";
                    break;
                case SDL_EventType::SDL_EVENT_QUIT:
                    return;
                default:
                    break;
            }
        }
    }
}

int main(int argc, char** argv){
    SDL::Init();
    run();
    SDL_Quit();
    return 0;
}
