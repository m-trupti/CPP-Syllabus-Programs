#include <iostream>
using namespace std;
float depo,wdraw;
int choice;
struct employee
{
 char name[30]; 
 int accNo;
 float balance;
};
int main()
{ /*declare structure variable*/ 
 struct employee emp;  
 /*read employee details*/
 cout<<"Enter Employee details : "<<endl;
 cout<<"Enter Name :"<<endl; 
 cin>>emp.name; 
 cout<<"Enter Account Number : ";
 cin>>emp.accNo;
 cout<<"Enter Balance : "; 
 cin>>emp.balance;  
 /*print employee details*/ 
 cout<<"------------------------------"<<endl;
 cout<<"Entered details are : "<<endl;
 cout<<"Name: "<<emp.name<<endl;
 cout<<"Account Number : "<<emp.accNo<<endl; 
 cout<<"Current Balance: "<<emp.balance<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"Do you wish to Deposit or Withdraw Money ?"<<endl;
 cout<<"Press 1 to Deposit, 2 to Withdraw or any other key to Exit."<<endl;
 cin>>choice;
 switch(choice)
 {
 	case 1:
 	{
 		cout<<"Enter Amount to be deposited : Rs. ";
 		cin>>depo;
 		emp.balance=emp.balance+depo;
 		cout<<"New Balance is : "<<emp.balance;
    }
 		break;
 	case 2:
 	{
 		cout<<"Enter Amount to be withdrawn : Rs. ";
 		cin>>wdraw;
 		if(wdraw>emp.balance)
 		{
 			cout<<"Insufficient Balance. Amount cannot be withdrawn.";
		}
		else
		{
 		emp.balance=emp.balance-wdraw;
 		cout<<"New Balance is : "<<emp.balance;
    	}
}
 		break;
 	default:	
 	cout<<"Thanks for using our system.";
 }
 return 0;
 }
