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
	   myfile << a << " " << b << " " << c << " \n";
	else
		cout << "Error opening abc.txt" << endl;
	
	myfile.close();
	   
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
   return 0;
}
