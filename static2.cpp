//shubham kumbhar
//static key word
//static key always start with 0 and it is valid throughout the program


#include<iostream>
using namespace std;
void display();

int main()
{
	display();
	display();
	return 0;
}

void display()
{
   static int a;
	cout<<a;
	a++;
}
