#include "Phone.h"
#include "OffState.h"
#include "ReadyState.h"
#include "LockedState.h"

ReadyState::ReadyState(Phone *phone) : State(phone)
{
}

void ReadyState::homeButton()
{
    getPhone()->home();
}

void ReadyState::powerButton()
{
    getPhone()->setState(new OffState(getPhone()));
    getPhone()->lock();
}

void ReadyState::volumeUpButton()
{
    getPhone()->volumeUp();
}

void ReadyState::volumeDownButton()
{
    getPhone()->volumeDown();
}