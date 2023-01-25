#include "machine.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Snack* bounty = new Snack("Bounty", 139, 31.8);
    Snack* snickers = new Snack("Snickers", 150, 53.6);

    Slots* bounty_slot = new Slots(10);
    for (int i = 0; i < 5; i++)
    {
        bounty_slot->addSnack(bounty);
    }

    Slots* snickers_slot = new Slots(10);
    for (int i = 0; i < 8; i++)
    {
        snickers_slot->addSnack(snickers);
    }

    Machine* machine = new Machine(8);

    machine->addSlot(bounty_slot);
    cout << "Bounty slot: " << endl;
    displaySlot(bounty, bounty_slot);

    machine->addSlot(snickers_slot);
    cout << "Snickers slot: " << endl;
    displaySlot(snickers, snickers_slot);


    cout << "Empty slots: " << machine->getEmptySlots();

    delete bounty_slot;
    delete snickers_slot;
    delete bounty;
    delete snickers;
    delete machine;

    return 0;
}
