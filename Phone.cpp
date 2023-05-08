#include "Phone.h"
#include "OffState.h"

Phone::Phone()
{
    this->state = new OffState();
}

State *Phone::getState()
{
    return this->state;
}

void Phone::setState(State *state)
{
    if (this->state != nullptr)
        delete this->state;
    this->state = state;
}

void Phone::lock()
{
    cout << "Lock the phone and turn off the screen" << endl;
}

void Phone::home()
{
    cout << "Go to home screen" << endl;
}

void Phone::unlock()
{
    cout << "Unlock the phone and go to home screen" << endl;
}

void Phone::turnOn()
{
    cout << "Turning screen on, phone is being locked" << endl;
}

void Phone::volumeUp()
{
    cout << "Volume Up" << endl;
}

void Phone::volumeDown()
{
    cout << "Volume Down" << endl;
}

// button
void Phone::homeButton()
{
    this->state->homeButton(this);
}

void Phone::powerButton()
{
    this->state->powerButton(this);
}

void Phone::volumeUpButton()
{
    this->state->volumeUpButton(this);
}

void Phone::volumeDownButton()
{
    this->state->volumeDownButton(this);
}

Phone::~Phone()
{
    delete state;
}