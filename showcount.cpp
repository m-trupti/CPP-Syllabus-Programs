#include <iostream>
using namespace std;
class test
{
	int objNo;
	static int objCount;
	
	public:
		test()
		{
			objNo=++objCount;
		}
		~test()
		{
			--objCount;
		}
		void printCount(void)
		{
			cout<<"Object Number : "<<objNo<<endl;
		}
		static void showcount(void)
		{
			cout<<"Count : "<<objCount<<endl;
		}
};
int test::objCount;
int main(void)
{
	test t1,t2;
	cout<<"When Objects t1 and t2 are created : "<<endl;
	test::showcount();
	cout<<"When another object t3 is created : "<<endl;
	test t3;
	test::showcount();
	t1.printCount();
	t2.printCount();
	t3.printCount();
	return 0;
 } 
