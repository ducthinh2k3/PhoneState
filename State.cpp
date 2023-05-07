#include "State.h"

State::State(Phone *phone)
{
    this->phone = phone;
}

Phone *State::getPhone()
{
    return phone;
}