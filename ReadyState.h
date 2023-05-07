#pragma once    
#include "State.h"

class ReadyState : public State
{
public:
    ReadyState(Phone *phone);
    void homeButton();
    void powerButton();
    void volumeUpButton();
    void volumeDownButton();
};
