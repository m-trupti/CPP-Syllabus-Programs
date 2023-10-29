#include <iostream>
using namespace std;
int main()
{
	int x=1;
	char a='a';
	try
	{
		if(x==0)
		{
			throw x;
		}
		if(a='a')
		{
			throw a;
		}
	}
	catch(...)
	{
		cout<<"Exception caught.";
	}
	return 0;
}
