//shubham kumbhar
//sattic function

#include<iostream>
using namespace std;

class demo
{
	public:
		void msg();
		static void show()
		{
			cout<<"hi static";
		}
};
void demo :: msg()
{
	cout<<"masg";
}
int main()
{
	demo d;
	d.msg();
	d.show();
	demo :: show();
}
