#include <iostream>
using namespace std;

class Phone
{
    private:
        enum State
        {
            OffState,
            LockedState,
            ReadyState
        };
        
        int state;
    public:
        Phone()
        {
            state = OffState;
        }
    
        void lock()
        {
            cout << "Lock the phone and turn off the screen" << endl;
        }
        void home()
        {
            cout << "Go to home screen" << endl;
        }
        void unlock()
        {
            cout << "Unlock the phone and go to home screen" << endl;
        }
        void turnOn()
        {
            cout << "Turning screen on, phone is being locked" << endl;
        }
        void volumeUp()
        {
            cout << "Volume Up" << endl;
        }
        void volumeDown()
        {
            cout << "Volume Down" << endl;
        }
        
        //button
        void homeButton()
        {
            switch(state)
            {
                case OffState:
                    state = LockedState;
                    turnOn();
                    break;
                case LockedState:
                    state = ReadyState;
                    unlock();
                    break;
                case ReadyState:
                    home();
                    break;
            }
        }
        
        void powerButton()
        {
            switch(state)
            {
                case OffState:
                    state = LockedState;
                    turnOn();
                    break;
                case LockedState:
                    state = OffState;
                    lock();
                    break;
                case ReadyState:
                    state = OffState;
                    lock();
                    break;  
            }
        }
        
        void volumeUpButton()
        {
            switch(state)
            {
                case OffState:
                    cout << "Locked" << endl;
                    break;
                case LockedState:
                    cout << "Locked" << endl;
                    break;
                case ReadyState:
                    volumeUp();
                    break;
            }
        }
        
        void volumeDownButton()
        {
            switch(state)
            {
                case OffState:
                    cout << "Locked" << endl;
                    break;
                case LockedState:
                    cout << "Locked" << endl;
                    break;
                case ReadyState:
                    volumeDown();
                    break;
            }
        }

};

int main()
{
    Phone phone;
    cout << "1: Press the home button" << endl;
    cout << "2: Press the Power button" << endl;
    cout << "3: Press the volume up button" << endl;
    cout << "4: Press the volume down button" << endl;
    cout << "0: Exit program" << endl;
    while (true)
    {
        int choice = 0;
        do
        {
            cout << "Input choice: ";
            cin >> choice;
        } while (choice < 0 || choice > 4);

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            phone.homeButton();
            break;
        case 2:
            phone.powerButton();
            break;
        case 3:
            phone.volumeUpButton();
            break;
        case 4:
            phone.volumeDownButton();
            break;
        }
    }
}
