//shubham kumbhar
//recursion

#include<iostream>
using namespace std;
void rec(int);

int main()
{
	rec(1);
	return 0;
	
}


void rec(int n)
{
	cout<<"winding phese"<<endl;
	if(n<3)
	{
		rec(n+1);
	}
	
		cout<<"unwinding phese"<<endl;
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
