#include "Phone.h"
#include "LockedState.h"
#include "OffState.h"
#include "ReadyState.h"

void OffState::homeButton(Phone *phone)
{
    phone->setState(new LockedState());
    phone->turnOn();
}

void OffState::powerButton(Phone *phone)
{
    phone->setState(new LockedState());
    phone->turnOn();
}

void OffState::volumeUpButton(Phone *phone)
{
    cout << "Locked" << endl;
}

void OffState::volumeDownButton(Phone *phone)
{
    cout << "Locked" << endl;
}