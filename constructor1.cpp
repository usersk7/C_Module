//shubham kumbhar
//constructor

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	
	public:
		box();
		box(int a,int b,int c);
		box(int n);
		void show();	
};

void box :: show()
{
	cout<<l<<b<<h<<endl;

}


box :: box()
{
	cout<<"enter value : ";
	cin>>l >>b >>h;
}

box :: box(int i,int j,int k)
{
	l=i;
	b=j;
	h=k;
}

box :: box(int p)
{
	l=b=h=p; 
	
}

int main()
{
	box b;
	box b1(10);
	box b2(30,40,50);
	b.show();
	b1.show();
	b2.show();
	return 0;
}






