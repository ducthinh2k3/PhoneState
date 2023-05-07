#pragma once
#include "State.h"

class OffState : public State
{
public:
    OffState(Phone *phone);
    void homeButton();
    void powerButton();
    void volumeUpButton();
    void volumeDownButton();
};
