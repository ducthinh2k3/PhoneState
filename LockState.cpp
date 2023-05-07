#include "Phone.h"
#include "OffState.h"
#include "ReadyState.h"
#include "LockedState.h"

LockedState::LockedState(Phone *phone) : State(phone)
{
}

void LockedState::homeButton()
{
    getPhone()->setState(new ReadyState(getPhone()));
    getPhone()->unlock();
}

void LockedState::powerButton()
{
    getPhone()->setState(new OffState(getPhone()));
    getPhone()->lock(); 
}

void LockedState::volumeUpButton()
{
    cout << "Locked" << endl;
}

void LockedState::volumeDownButton()
{
    cout << "Locked" << endl;
}