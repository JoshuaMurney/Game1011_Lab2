#include <iostream>
#include <string>
using namespace std;

class Character
{
private:
	string characterArray[100];
	int len_inches;
public:
	Character()
	{
		len_inches = 0;
	}
	Character(int inches)  // Convert constructor
	{
		len_inches = inches;
	}
	Character(int feet, int inches)
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
	friend Character operator+(Character a, Character b);
	friend Character operator-(Character a, Character b);
	friend bool operator<(Character a, Character b);
	friend bool operator>(Character a, Character b);
	friend bool operator==(Character a, Character b);

	// Overload our prefix and postfix operator++
	Character operator++();  // ++b; (Prefix)
	Character operator++(int); // b++; (Postfix)

	//  Overload output and input
	friend ostream& operator<<(ostream& out, Character a);
	friend istream& operator>>(istream& in, Character& a);

};


class Human : Character
{
private:
	string m_name;
	string m_health;
public:
	//Constructor
	Human() // Default constructor
	{
		m_name = "Harold";
		m_health = "20";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nHealth Value: " << m_health << endl;
		return m_name;
	}

};

class Orc : Character
{
private:
	string m_name;
	string m_health;
public:
	//Constructor
	Orc() // Default constructor
	{
		m_name = "Gina";
		m_health = "40";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nHealth Value: " << m_health << endl;
		return m_name;
	}

};

class Elf : Character
{
private:
	string m_name;
	string m_health;
public:
	//Constructor
	Elf() // Default constructor
	{
		m_name = "Rose";
		m_health = "30";
	}
	// Inline functions
	string displayInfo()
	{
		cout << "Name: " << m_name << "\nHealth Value: " << m_health << endl;
		return m_name;
	}

};
#pragma once
