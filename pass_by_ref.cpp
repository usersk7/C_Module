//shubham kumbhar;
//pass by refrence



#include<iostream>
using namespace std;

void swap(int &,int &);
int main()
{
	int a,b;
	cout<<"enter no a and b ";
	cin>>a>>b;
	
	swap(a,b);
	cout<<"val is a: "<<a<<endl<<"haha this is b : "<<b;

	}
	
	void swap(int &p,int &q)
	{
		int temp;
		temp = p;
		p = q;
		q = temp;
			}
