#include <iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"Parent Class Content."<<endl;
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"Child Class Content."<<endl;
		}
};
int main()
{
	cout<<endl;
	Derived d;
	d.display();
	d.show();
	return 0;
}
