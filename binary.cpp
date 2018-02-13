#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream myfile1{"abc.bin",ios::binary};
   
   if(myfile1)
   {
	   myfile1.write(reinterpret_cast<char*>(&a),sizeof(a));
	   myfile1.write(reinterpret_cast<char*>(&b),sizeof(b));
	   myfile1.write(reinterpret_cast<char*>(&c),sizeof(c));
   }
   else
   {
	   cout<<"There was an error opening abc.bin"<<endl;
	}
	myfile1.close();
	return 0;
}
