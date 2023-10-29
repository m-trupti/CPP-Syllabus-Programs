#include <iostream>
using namespace std;
class A
 {
  public: 
  void displayA()
   {
    cout<<"Base Class A content."<<endl;
  }
 };
class B : public A 
{
	public:
	void displayB()
   {
    cout<<"Class B content."<<endl;
  }
};
class C : public B 
{
};
int main() 
{
  C obj;
  cout<<"Object of C can access public funtions of Class B as well as Class A."<<endl;
  obj.displayB();
  obj.displayA();
  return 0;
}
