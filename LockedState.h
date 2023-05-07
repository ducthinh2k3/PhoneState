#pragma once
#include "State.h"

class LockedState : public State
{
public:
    LockedState(Phone *phone);
    void homeButton();
    void powerButton();
    void volumeUpButton();
    void volumeDownButton();
};

