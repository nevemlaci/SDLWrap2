//
// Created by nevemlaci on 20/06/2024.
//

#ifndef SDLWRAP2_CPPSDL_HPP
#define SDLWRAP2_CPPSDL_HPP

#include <SDL3//SDL.h>
#include "cppSDLEvent.hpp"
#include "cppSDLWindow.hpp"

namespace SDL{
    inline constexpr uint32_t SDL_INIT_EVERYTHING =
            SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_CAMERA | SDL_INIT_EVENTS | SDL_INIT_HAPTIC |
            SDL_INIT_SENSOR | SDL_INIT_GAMEPAD | SDL_INIT_JOYSTICK;

    /**
     * @brief Initializes SDL subsystems
     * @param flags SDL Initialization flag or multiple flags bitor'd together. Default: SDL_INIT_EVERYTHING
     * @return true on success or false on error
     */
    bool Init(uint32_t flags = SDL_INIT_EVERYTHING);

    void ShowMsgBox(const char* txt);
}

#endif //SDLWRAP2_CPPSDL_HPP
