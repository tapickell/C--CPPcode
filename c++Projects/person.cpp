#include "person.h"

void person::setFirstName(string firstName)
{
	_firstName = firstName;
}
void person::setLastName(string lastName)
{
	_lastName = lastName;
}
string person::getFirstName()
{
	return _firstName;
}
string person::getLastName()
{
	return _lastName;
}
