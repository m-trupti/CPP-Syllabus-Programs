#include <iostream>
using namespace std;
class Base
{
 public:
 virtual void Display () 
 {
  cout << "Display of Base" << endl; 
  }
  };
class Derived:public Base
{
 public: 
 void Display ()
  {
   cout << "Display of Derived" << endl; 
  }
};
int main()
{ Base *p = new Derived(); 
  p->Display();
  return 0;
}

