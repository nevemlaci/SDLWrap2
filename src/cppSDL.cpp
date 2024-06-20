//
// Created by nevemlaci on 20/06/2024.
//

#include "cppSDL.hpp"



bool SDL::Init(uint32_t flags){
    return (SDL_Init(flags) == 0);
}


