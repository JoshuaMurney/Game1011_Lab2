#include "Character.h"

Character operator+(Character a, Character b)
{
	return Character(a.len_inches + b.len_inches);
}

Character operator-(Character a, Character b)
{
	return Character(a.len_inches - b.len_inches);
}

bool operator<(Character a, Character b)
{
	return a.len_inches < b.len_inches;
}


bool operator>(Character a, Character b)
{
	return a.len_inches > b.len_inches;
}

bool operator==(Character a, Character b)
{
	return a.len_inches == b.len_inches;
}

Character Character::operator++() // Prefix
{
	len_inches++;
	return *this;

}

Character Character::operator++(int) // Postfix
{
	Character temp = *this;
	len_inches++;
	return temp;
}

ostream& operator<<(ostream& out, Character a)
{
	out << a.getFeet() << " feet, " << a.getInches() << " inches";
	return out;
}

istream& operator>>(istream& in, Character& a)
{
	int feet, inches;
	cout << "Enter feet: ";
	in >> feet;
	cout << "Enter inches: ";
	in >> inches;

	a.setLength(feet, inches);
	return in;
}