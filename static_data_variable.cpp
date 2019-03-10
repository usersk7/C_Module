//shubham kumbhar
//static data member or static variable


#include<iostream>

using namespace std;

class demo
{
	int a;

	public:
      static int b;
		void show()
		{
			cout<<"this is a : "<<a<<endl;
			cout<<"this is static b : "<<b<<endl;
		}

};

int demo :: b=10;

int main()
{
	demo d;
	d.show(); //a=0 and b=10
	demo :: b=20;
	demo d2;
	d2.show(); //a: garbage( 4883904) and b : 20
	return 0;
}

