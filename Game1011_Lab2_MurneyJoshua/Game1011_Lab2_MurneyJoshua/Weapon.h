#include <iostream>
#include <string>
using namespace std;

class Weapon
{
private:
	string weaponArray[100];
	int len_inches;
public:
	Weapon()
	{
		len_inches = 0;
	}
	Weapon(int inches)  // Convert constructor
	{
		len_inches = inches;
	}
	Weapon(int feet, int inches)
	{
		setLength(feet, inches);
	}
	int getFeet() const
	{
		return len_inches / 12;
	}
	int getInches() const
	{
		return len_inches % 12;
	}
	void setLength(int feet, int inches)
	{
		len_inches = (12 * feet) + inches;
	}

	// Operator overloading -- Prototypes
	friend Weapon operator+(Weapon a, Weapon b);
	friend Weapon operator-(Weapon a, Weapon b);
	friend bool operator<(Weapon a, Weapon b);
	friend bool operator>(Weapon a, Weapon b);
	friend bool operator==(Weapon a, Weapon b);

	// Overload our prefix and postfix operator++
	Weapon operator++();  // ++b; (Prefix)
	Weapon operator++(int); // b++; (Postfix)

	//  Overload output and input
	friend ostream& operator<<(ostream& out, Weapon a);
	friend istream& operator>>(istream& in, Weapon& a);

};


class Sword : Weapon
{
private:
	string m_name;
	string m_description;
	string m_damage;
	string m_ability;
public:
	//Constructor
	Sword() // Default constructor
	{
		m_name = "Sword";
		m_description = "A weapon given to you by the royal guard";
		m_damage = "5";
		m_ability = "The sharpness causes bonus piercing damage";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nDescription: " << m_description << "\nDamage: " << m_damage << "\nAbility: " << m_ability << endl;
		return m_name;
	}

};

class Axe : Weapon
{
private:
	string m_name;
	string m_description;
	string m_damage;
	string m_ability;
public:
	//Constructor
	Axe() // Default constructor
	{
		m_name = "Axe";
		m_description = "A weapon handed down to you from your father";
		m_damage = "10";
		m_ability = "";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nDescription: " << m_description << "\nDamage: " << m_damage << "\nAbility: " << m_ability << endl;
		return m_name;
	}

};

class Bow : Weapon
{
private:
	string m_name;
	string m_description;
	string m_damage;
	string m_ability;
public:
	//Constructor
	Bow() // Default constructor
	{
		m_name = "Bow";
		m_description = "A weapon found in the mystic forest";
		m_damage = "3";
		m_ability = "Arrows deal bonus thunder damage";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nDescription: " << m_description << "\nDamage: " << m_damage << "\nAbility: " << m_ability << endl;
		return m_name;
	}

};
#pragma once
