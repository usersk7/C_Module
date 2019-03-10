//shubham kumbhar
//static key word
//without static keyword garbage value varies compiler to compliler
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
	int a;
	cout<<a;
	a++;
}
