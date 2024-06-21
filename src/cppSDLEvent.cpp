//
// Created by nevemlaci on 20/06/2024.
//

#include "cppSDLEvent.hpp"


SDL::EventType::EventType(SDL_EventType type) : m_type(type){

}

bool SDL::operator=(uint32_t e1, EventType e2){
    return e1==e2.m_type;
}

bool SDL::operator=(EventType e2, uint32_t e1){
    return e1==e2.m_type;
}

int SDL::Event::Poll(){
    return SDL_PollEvent(&m_event);
}

bool SDL::Event::IsQueueEmpty(){
    return !SDL_PollEvent(nullptr);
}
