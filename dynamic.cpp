#include<iostream>
using namespace std;

class Mania
{
  int num1;
  int num2;
  int *ptr;

public:
  // default constructor (here, it is dynamic constructor also)
  Mania()
  {
    num1 = 0;
    num2 = 0;
    ptr = new int;
  }

  //dynamic constructor with parameters
  Mania(int x, int y, int z)
  {
    num1 = x;
    num2 = y;
    
    ptr = new int;
    *ptr = z;
  }
  void display()
 {
   cout << num1 << " " << num2 << " " << *ptr;
 }
};

int main()
{
  Mania obj1;
  Mania obj2(3, 5, 11);

  obj1.display();
  cout << endl;
  
  obj2.display();
}
