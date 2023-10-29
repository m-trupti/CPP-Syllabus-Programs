#include <iostream>
using namespace std;

int main()
{
	float num[5] = {1.0, -1.2345, 2350.1, 23.4, 45.34};
	float a=425.0;
	int i;

cout.setf(ios::showpos); // show the + sign before positive numbers
  cout.setf(ios::scientific); // use scientific notation
  cout.precision(2); // two digits after decimal point

	for(i = 0; i < 5; i++)
	{
 	 cout.width(20);    // use 10 spaces for the number
   	cout.fill('@');    // pad with $
      cout << num[i] << endl;
	}

	cout.setf(ios::showpoint);
	cout.unsetf(ios::showpos);
	cout<<endl<<a;
  return 0;
}

