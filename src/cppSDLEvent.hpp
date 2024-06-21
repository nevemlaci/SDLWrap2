//
// Created by nevemlaci on 20/06/2024.
//

#ifndef SDLWRAP2_CPPSDLEVENT_HPP
#define SDLWRAP2_CPPSDLEVENT_HPP
#include <SDL3/SDL.h>

namespace SDL{
    class Event final {
        SDL_Event m_event;
    public:
        Event() = default;
        /**
         * @brief Get the type of the event
         * @return event type as a 32 bit uint. Check equality with an SDL_EventType.
         */
        [[nodiscard]] uint32_t GetType() const {
            return m_event.type;
        };
        
        /**
         * @brief Get the underlying SDL_Event union
         * @return underlying SDL_Event union
         */
        [[nodiscard]] const SDL_Event& GetEvent() const{
            return m_event;
        }
        
        /**
         * @brief Poll for currently pending events.
         * @return 1 if there is a pending event or 0 if there are none available.
         */
        int Poll();
        
        /**
         * @brief Check if the event queue is empty
         * @return
         */
        static bool IsQueueEmpty();

    };
}


#endif //SDLWRAP2_CPPSDLEVENT_HPP
