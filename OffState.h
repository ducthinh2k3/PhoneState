#pragma once
#include "State.h"

class OffState : public State
{
public:
    void homeButton(Phone* phone);
    void powerButton(Phone* phone);
    void volumeUpButton(Phone* phone);
    void volumeDownButton(Phone* phone);
};
