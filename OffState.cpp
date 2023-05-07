#include "Phone.h"
#include "LockedState.h"
#include "OffState.h"
#include "ReadyState.h"

OffState::OffState(Phone *phone) : State(phone)
{
}

void OffState::homeButton()
{
    getPhone()->setState(new LockedState(getPhone()));
    getPhone()->turnOn();
}

void OffState::powerButton()
{
    getPhone()->setState(new LockedState(getPhone()));
    getPhone()->turnOn();
}

void OffState::volumeUpButton()
{
    cout << "Locked" << endl;
}

void OffState::volumeDownButton()
{
    cout << "Locked" << endl;
}