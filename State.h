#pragma once
class Phone;

class State
{
private:
    Phone *phone;

public:
    State(Phone *phone);
    Phone *getPhone();
    virtual void homeButton() = 0;
    virtual void powerButton() = 0;
    virtual void volumeUpButton() = 0;
    virtual void volumeDownButton() = 0;
};
