//shubham kumbhar
//inline function

#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		void get()
		{
			cout<<"enter no : ";
			cin>>a;
		}
		
		void show();
		
};

demo :: show()
{
	cout<<"ur no is :"<<a;
}

int main()
{
	demo d;
	d.get();
	d.show();
}
