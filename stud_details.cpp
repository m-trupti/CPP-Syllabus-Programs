#include<iostream>
using namespace std;
class Student
{ 
 private: 
 char name[20];
 int rollno;
 public: 
 void input(); 
 void display(); 
 };
 void Student::input()
 {
  cout<<"Enter Name :"<<endl;
  cin>>name; 
  cout<<"Enter Roll Number :"<<endl;
  cin>>rollno;
 }
 void Student::display()
 {
  cout<<"Student Details are :"<<endl;
  cout<<"Student Name : "<<name<<endl; 
  cout<<"Student Roll Number : "<<rollno;
 }
 int main()
 {
  Student s1; 
  s1.input();
  s1.display();
  return 0;
  }
