#include <iostream>

using namespace std;

void doSomething(int *param)
{
	if(param == NULL)
	{
		throw new string("'param' cannot be NULL");
	}
	else
	{
		cout << "param is ok" << endl;
	}
}

int main(int argc, const char* argv[])
{
	int *intPointer = NULL;
	try
	{
		doSomething(intPointer);
	}
	catch (string *e)
	{
		cout << "exception error: " << *e << endl;
	}

	return 0;
}