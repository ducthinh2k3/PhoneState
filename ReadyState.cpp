#include "Phone.h"
#include "OffState.h"
#include "ReadyState.h"
#include "LockedState.h"

void ReadyState::homeButton(Phone *phone)
{
    phone->home();
}

void ReadyState::powerButton(Phone *phone)
{
    phone->setState(new OffState());
    phone->lock();
}

void ReadyState::volumeUpButton(Phone *phone)
{
    phone->volumeUp();
}

void ReadyState::volumeDownButton(Phone *phone)
{
    phone->volumeDown();
}