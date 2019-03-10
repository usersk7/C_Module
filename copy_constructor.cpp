//shubham kumbhar
//program to demonstrate copy constructor

//default copy constructor uses shallow copy

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	
	public:
		box();
		box(int a,int b,int c);
		box(int n);
		box(box &);
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

box :: box(box &a)
{
	//l = a.l;
	//b = a.b;
	//h = a.h;
	
	*this=a;
}

int main()
{
	box b;
	box b1(10);
	box b2(30,40,50);
	box b3(b1);	
	b.show();
	b1.show();
	b2.show();
    
    box b5(b2);  //  box b5 = b2;   this is alternate option for passing value to copy constructor   
	
	b5.show();
	
	return 0;
}






