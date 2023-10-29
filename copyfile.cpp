#include <fstream>
#include <iostream>
using namespace std; 
int main( ) 
{ 
 char source[ 67 ], target[ 67 ]; 
 char ch; 
 cout << endl << "Enter source filename :"<<endl; 
 cin >> source; 
 cout << endl << "Enter target filename :"<<endl; 
 cin >> target; 
 ifstream infile ( source ); 
 ofstream outfile ( target ); 
 while( infile ) 
 { 
infile.get( ch ); 
outfile.put( ch ); 
 } 
 return 0;
}
