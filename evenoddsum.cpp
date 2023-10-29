#include <iostream>
using namespace std; 
int main()
{
 int i, num, odd_sum = 0, even_sum = 0;
 cout<<"Enter a number :"<<endl;
 cin>>num;
 for (i = 1; i <= num; i++)
 {
   if (i % 2 == 0) 
	{
	 even_sum = even_sum + i;
	}
   else
   {
    odd_sum = odd_sum + i;
   }
}
cout<<"Sum of all odd numbers : "<<odd_sum<<endl;
cout<<"Sum of all even numbers : "<<even_sum;
return 0;
}
