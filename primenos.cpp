#include <iostream>
using namespace std;
int main()
{
 int n, i, j, count;
 cout<<"Prime Number Series"<<endl;
 cout<<"Enter a number :"<<endl;
 cin>>n;
 cout<<"The prime numbers between 1 to "<<n<<" are :"<<endl;
 for(i = 2; i <= n; i++) 
 {
  count = 0; 
  for(j = 2; j <=i/2; j++)
  {
   if(i % j == 0) 
   {
    count=1; 
    break;
   }
}
   if(count==0 && n!=1) 
   {
    cout<<i<<endl;
   }
}
  return 0;
}
