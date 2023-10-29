#include <iostream>
using namespace std;
void test(int x)
{
	try{
		if(x==1)
		{
			throw x;
		}
		else if(x==0)
		{
			throw 'x';		
		}
		else if(x==-1)
		{
			throw 1.0;		
		}
		cout<<"End of try block."<<endl;
	} 
	catch(char c)
	{
		cout<<"Caught a character."<<endl;
	}
	catch (int c)
	{
		cout<<"Caught an integer."<<endl;
	} 
	catch(double c)
	{
		cout<<"Caught a double."<<endl;
	}
	cout<<"End of try-catch block."<<endl;
	cout<<" "<<endl;
}
int main()
{
	cout<<"Testing Multiple Catch Statements : "<<endl;
	cout<<"When x == 1 :"<<endl;
	test(1);
	cout<<"When x == 0 :"<<endl;
	test(0);
	cout<<"When x == -1 :"<<endl;
	test(-1);
	return 0;
}
