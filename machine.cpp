#include "machine.h"
#include <iostream>
#include <string>

using namespace std;


Snack::Snack(const string name, double calories, double price)
{
	snackName = name;
	snackCalories = calories;
	snackPrice = price;
}

Snack::Snack(const string name)
{
	snackName = name;
}

Snack::~Snack()
{
}

void Snack::setName(string name)
{
	snackName = name;
}


const string Snack::getSnackName() const
{
	return snackName;
}

void Snack::setSnackName(const string value)
{
	snackName = value;
}

double Snack::getSnackCalories() const
{
	return snackCalories;
}

void Snack::setSnackCalories(double value)
{
	if (value > 0)
		snackCalories = value;
	else
		cout << "Cannot set value below 0";
}

double Snack::getSnackPrice() const
{
	return snackPrice;
}

void Snack::setSnackPrice(double value)
{
	if (value > 0)
		snackPrice = value;
	else
		cout << "Cannot set value below 0";
}

Slots::Slots(int snack)
{
	slotCount = snack;
}

Slots::~Slots()
{
}

int Slots::getSlot() const
{
	return slotCount - snackCount;
}

void Slots::setSlot(int snack)
{
	snackCount = snack;
}

void Slots::addSnack(Snack* snacker)
{
	snackCount += 1;
}

Machine::Machine(int slotsCount)
{
	slots = slotsCount;
}

void Machine::addSlot(Slots* slotCount)
{
	++slotCount;
}

int Machine::getEmptySlots() const
{
	return machineSize - machineCount;
}

Machine::~Machine()
{
}

void displaySlot(Snack* snack, Slots* snacker)
{
	cout << "Name: " << snack->getSnackName() << ";" << endl << "Calories: " << snack->getSnackCalories() << ";" << endl << "Price : " << snack->getSnackPrice() << ";" << endl;
	cout << "Empty cellspacing: " << snacker->getSlot() << "\n" << endl;
}
