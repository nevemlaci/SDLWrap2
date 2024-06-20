//
// Created by nevemlaci on 20/06/2024.
//

#ifndef SDLWRAP2_CPPSDLEVENT_HPP
#define SDLWRAP2_CPPSDLEVENT_HPP
#include <SDL2/SDL.h>

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
        
        /* pointless xd
        [[nodiscard]] SDL_CommonEvent GetCommonEvent() const;
        [[nodiscard]] SDL_DisplayEvent GetWindowEvent() const;
        [[nodiscard]] SDL_WindowEvent GetKeyEvent() const;
        [[nodiscard]] SDL_KeyboardEvent GetEditEvent() const;
        [[nodiscard]] SDL_TextEditingEvent GetCommonEditExtEvent() const;
        [[nodiscard]] SDL_TextEditingExtEvent GetTextEvent() const;
        [[nodiscard]] SDL_CommonEvent GetMotionEvent() const;
        [[nodiscard]] SDL_CommonEvent GetButtonEvent() const;
        [[nodiscard]] SDL_CommonEvent GetWheelEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJAxisEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJBallEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJHatEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJButtonEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJDeviceEvent() const;
        [[nodiscard]] SDL_CommonEvent GetJBatteryEvent() const;
        [[nodiscard]] SDL_CommonEvent GetCAxisEvent() const;
        [[nodiscard]] SDL_CommonEvent GetCButtonEvent() const;
        [[nodiscard]] SDL_CommonEvent GetCDeviceEvent() const;
        [[nodiscard]] SDL_CommonEvent GetCTouchPadEvent() const;
        [[nodiscard]] SDL_CommonEvent GetCSensorEvent() const;
        [[nodiscard]] SDL_CommonEvent GetADevieEvent() const;
        [[nodiscard]] SDL_CommonEvent GetSensorEvent() const;
        [[nodiscard]] SDL_CommonEvent GetQuitEvent() const;
        [[nodiscard]] SDL_CommonEvent GetUserEvent() const;
        [[nodiscard]] SDL_CommonEvent GetSyswmEvent() const;
        [[nodiscard]] SDL_CommonEvent GetTFingerEvent() const;
        [[nodiscard]] SDL_CommonEvent GetMGestureEvent() const;
        [[nodiscard]] SDL_CommonEvent GetDGestureEvent() const;
        [[nodiscard]] SDL_CommonEvent GetDropEvent() const;
        */
    };
}


#endif //SDLWRAP2_CPPSDLEVENT_HPP
