#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
int main() 
{
	cout<<"String to Int : "<<endl;
    cout<<"Using atoi() function :"<<endl;
	char str[] = "456";
    int num = std::atoi(str);

    std::cout << "num = " << num<<endl;
    
    cout<<"Int to String : "<<endl;
      int num2 = 15;
  	
  	cout<<"Using str() function :"<<endl;
    // creating stringstream object ss
    std::stringstream ss;
  
    // assigning the value of num to ss
    ss << num2;
  
    // initializing string variable with the value of ss
    // and converting it to string format with str() function
    std::string strNum = ss.str();
    std::cout << strNum;

    return 0;
}
