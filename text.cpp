#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream myfile{"abc.txt"};
   
   if(myfile)
   {
	   myfile<<a<<" "<<b<<" "<<c<<endl;
   }
   else
   {
	   cout<<"There was an error opening abc.txt"<<endl;
	}
	myfile.close();
	return 0;
}
