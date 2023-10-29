#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;
int main() 
{ 
 string str; 
 cout<<"Enter a String \n"; 
 cin>>str; 
 int len = str.length(); 
 fstream file; 
file.open("TEXT.txt", ios::in | ios::out); 
 for(int i=0;i<len;i++) 
file.put(str[i]); 
file.seekg(0); 
 char ch; 
 while(file) 
 { 
file.get(ch); 
 cout<<ch; 
 } 
 return 0; 
}
