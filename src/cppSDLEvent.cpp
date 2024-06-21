//
// Created by nevemlaci on 20/06/2024.
//

#include "cppSDLEvent.hpp"


int SDL::Event::Poll(){
    return SDL_PollEvent(&m_event);
}

bool SDL::Event::IsQueueEmpty(){
    return !SDL_PollEvent(nullptr);
}
