#include "Weapon.h"

Weapon operator+(Weapon a, Weapon b)
{
	return Weapon(a.len_inches + b.len_inches);
}

Weapon operator-(Weapon a, Weapon b)
{
	return Weapon(a.len_inches - b.len_inches);
}

bool operator<(Weapon a, Weapon b)
{
	return a.len_inches < b.len_inches;
}


bool operator>(Weapon a, Weapon b)
{
	return a.len_inches > b.len_inches;
}

bool operator==(Weapon a, Weapon b)
{
	return a.len_inches == b.len_inches;
}

Weapon Weapon::operator++() // Prefix
{
	len_inches++;
	return *this;

}

Weapon Weapon::operator++(int) // Postfix
{
	Weapon temp = *this;
	len_inches++;
	return temp;
}

ostream& operator<<(ostream& out, Weapon a)
{
	out << a.getFeet() << " feet, " << a.getInches() << " inches";
	return out;
}

istream& operator>>(istream& in, Weapon& a)
{
	int feet, inches;
	cout << "Enter feet: ";
	in >> feet;
	cout << "Enter inches: ";
	in >> inches;

	a.setLength(feet, inches);
	return in;
}