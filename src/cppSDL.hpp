//
// Created by nevemlaci on 20/06/2024.
//

#ifndef SDLWRAP2_CPPSDL_HPP
#define SDLWRAP2_CPPSDL_HPP

#include <SDL2/SDL.h>
#include "cppSDLEvent.hpp"

namespace SDL{
    
    
    /**
     * @brief Initializes SDL subsystems
     * @param flags SDL Initialization flag or multiple flags bitor'd together. Default: SDL_INIT_EVERYTHING
     * @return true on success or false on error
     */
    bool Init(uint32_t flags = SDL_INIT_EVERYTHING);
    
    void ShowMsgBox(const char* txt);
    
    
}

#endif //SDLWRAP2_CPPSDL_HPP
