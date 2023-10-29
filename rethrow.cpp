#include <iostream>
using namespace std;
void divide(double x, double y)
{
	cout<<"Inside Divide Function :"<<endl;
	try{
		if(y==0.0)
		throw y;
		else
		cout<<"Division = "<<x<<" / "<<y<<" = "<<(x/y)<<endl;
	}
	catch(double)
	{
		cout<<"Caught double inside function."<<endl;
	}
	cout<<"End of Divide Function."<<endl;
}
int main()
{
	cout<<"Main Function : "<<endl;
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"Caught double inside Main Function."<<endl;
	}
	cout<<"End of Main Function."<<endl;
	return 0;
}
