#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    //constructor
    Student() 
	{
	 name = "Student"; 
	};

    //member function to get input
    void inputName(void)
    {
        cout << "Enter Student Name : ";
        cin >> name;
    }
    //member function to display number
    void displayName()
    {
        cout << "Student Name is : " << name << endl;
    }
};

//Main function
int main()
{
    //declaring object to the class number
    Student S;
    //input and display number using object
    //declaring pointer to the object
    Student* ptrS;
    ptrS = new Student; //creating & assigning memory

    //printing default value
    cout << "Default value... " << endl;
    //calling member function with pointer
    ptrS->displayName();

    //input values and print
    ptrS->inputName();
    ptrS->displayName();

    return 0;
}

