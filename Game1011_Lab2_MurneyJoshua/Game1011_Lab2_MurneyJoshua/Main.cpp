#include <iostream>
#include "intArray.h"
#include "Character.h"
#include "Weapon.h"
using namespace std;


int main()
{
	// Bool for do while loops
	bool again = false;
	
	int answer;
	int choice;

	// Wepon string names
	string character[7] = { };
	

	cout << "Welcome to the Character Customizer!" << endl;
	cout << "************************************" << endl;
	do
	{
		cout << "\nPlease select an option: \n1 = Create new character \n2 = View all characters \n3 = Delete a character \n4 = Exit" << endl;
		cin >> answer;
		switch (answer)
		{
		case 1:
			cout << "Please select a class: \n1 = Human \n2 = Orc \n3 = Elf" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "You created a Human!" << endl;
				for (int i = 0; i < 7; i++)
				{
					character[1] = " Human,";
				}
				again = true;
				break;
			case 2:
				cout << "You created a Orc!" << endl;
				for (int i = 0; i < 7; i++)
				{
					character[2] = " Orc,";
				}
				again = true;
				break;
			case 3:
				cout << "You created a Elf!" << endl;
				for (int i = 0; i < 7; i++)
				{
					character[3] = " Elf,";
				}
				again = true;
				break;
			}
			break;
		case 2:
			cout << "Please select a created character: " << endl;
			for (int i = 0; i < 7; i++)
			{
				cout << character[i] << endl;
			}
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Class: Human \nName: Harold\nHealth Value: 20\n\nWeapon: Sword\nDescription: A weapon given to you by the royal guard\nDamage: 5\nAbility: The sharpness causes bonus piercing damage" << endl;
				again = true;
				break;
			case 2:
				cout << "You created a Orc! \nName: Gina\nHealth Value: 40\nWeapon: Axe \nDescription: A weapon handed down to you from your father\nDamage: 10\nAbility: Can by ignited in fire causing bonus burning damage" << endl;
				again = true;
				break;
			case 3:
				cout << "You created a Elf! \nName: Rose\nHealth Value: 30\nWeapon: Bow \nDescription: A weapon found in the mystic forest\nDamage: 3\nAbility: Arrows deal bonus thunder damage" << endl;
				again = true;
				break;
			}
			break;
		case 3:
			cout << "Please select a character to delete:" << endl;
			for (int i = 0; i < 7; i++)
			{
				cout << character[i] << endl;
			}
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Human has been deleted";
				for (int i = 0; i < 7; i++)
				{
					character[1] = " ";
				}
				again = true;
				break;
			case 2:
				cout << "Orc has been deleted!";
				for (int i = 0; i < 7; i++)
				{
					character[2] = " ";
				}
				again = true;
				break;
			case 3:
				cout << "Elf has been deleted!";
				for (int i = 0; i < 7; i++)
				{
					character[3] = " ";
				}
				again = true;
				break;
			}
			break;
		case 4:
			cout << "\nGoodbye!\n";
			again = false;
			break;
		}
	} while (again == true); // Infinite loop until we break out


	return 0;
}