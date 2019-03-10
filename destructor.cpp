//shubham kumbhar
//program to demonstrate destructor

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	public:
 box(int p ,int q,int r)
{
	cout<<" this is constructor call : "<<endl;
	
	l=p;
	b=q;
	h=r;
	
}

~box()
{
		cout<<"this is destructor call : "<<endl;
}
void show ()
{
	cout<<l<<b<<h;
}

};


int main()
{
	box b2(30,40,50);
	b2.show();
	return 0;
}

