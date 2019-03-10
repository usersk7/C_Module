//shubham kumbhar
//opretor overloading 

#include<iostream>
using namespace std;


class counter
{
	int count;
	 
	 public:
	 	counter()
	 	{
	 		count=0;
		 }
	 	
	 	counter(int c)
	 	{
	 		count = c;
		 }
		 
		 void opretor++();
		 
		 void show()
		 {
		 	cout<<count<<endl;
		 }	
};


counter counter :: opretor++()
{
	++count;
}




int main()
{
	counter a=10;
	a.show();
	++a;
	a.show();
	return 0;
	
}




















/*
Output :
winding phese
winding phese
winding phese
unwinding phese
unwinding phese
unwinding phese

--------------------------------
Process exited after 3.389 seconds with return value 0
Press any key to continue . . .





*/
