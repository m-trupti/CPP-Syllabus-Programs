#include <iostream>
using namespace std;
int main()
{
	try
	{
		int age=15;
		if(age>=18)
		{
			cout<<"Access granted. You are old enough.";
		}
		else
		{
			throw 505;
		}
	}
	catch(...)
	{
		cout<<"Access denied.";
	}
	return 0;
}
