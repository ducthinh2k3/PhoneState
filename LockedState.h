#pragma once
#include "State.h"

class LockedState : public State
{
public:
    void homeButton(Phone* phone);
    void powerButton(Phone* phone);
    void volumeUpButton(Phone* phone);
    void volumeDownButton(Phone* phone);
};

