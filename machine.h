#pragma once
#include <string>

using namespace std;

class Snack
{
public:
	Snack(const string name, double calories, double price);
	Snack(const string name);
	~Snack();
	void setName(string name);

	const  string getSnackName() const; 
	void setSnackName(const string value);

	double getSnackCalories() const;
	void setSnackCalories(double value);
	
	double getSnackPrice() const;
	void setSnackPrice(double value);

private:
	string snackName;
	double snackCalories;
	double snackPrice;
};

class Slots
{
public:
	Slots(int snack);
	~Slots();
	int getSlot() const;
	void setSlot(int snack);
	void addSnack(Snack* snack);

private:
	int slotCount = 0;
	int snackCount = 0;
};

class Machine
{
public:
	Machine(int slotCount);
	void addSlot(Slots* slotCount);
	int getEmptySlots() const;
	~Machine();

private:
	int machineSize;
	int machineCount;
	int slots;
};

void displaySlot(Snack* snack, Slots* snacker);
