#include "Phone.h"

int main()
{
    Phone *phone = new Phone();
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
            delete phone;
            return 0;
        case 1:
            phone->homeButton();
            break;
        case 2:
            phone->powerButton();
            break;
        case 3:
            phone->volumeUpButton();
            break;
        case 4:
            phone->volumeDownButton();
            break;
        }
    }
}