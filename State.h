#pragma once
class Phone;

class State
{
public:
    virtual void homeButton(Phone* phone) = 0;
    virtual void powerButton(Phone* phone) = 0;
    virtual void volumeUpButton(Phone* phone) = 0;
    virtual void volumeDownButton(Phone* phone) = 0;
};
