#pragma once
#include <iostream>
using namespace std;

class State;
class Phone
{
private:
    State *state;

public:
    Phone();
    State *getState();
    void setState(State *state);

    void lock();
    void home();
    void unlock();
    void turnOn();
    void volumeUp();
    void volumeDown();

    // button
    void homeButton();
    void powerButton();
    void volumeUpButton();
    void volumeDownButton();
    ~Phone();
};

