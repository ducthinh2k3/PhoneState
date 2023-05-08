#include "Phone.h"
#include "OffState.h"
#include "ReadyState.h"
#include "LockedState.h"

void LockedState::homeButton(Phone *phone)
{
    phone->setState(new ReadyState());
    phone->unlock();
}

void LockedState::powerButton(Phone *phone)
{
    phone->setState(new OffState());
    phone->lock();
}

void LockedState::volumeUpButton(Phone *phone)
{
    cout << "Locked" << endl;
}

void LockedState::volumeDownButton(Phone *phone)
{
    cout << "Locked" << endl;
}