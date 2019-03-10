//shubham kumbhar
//program to demonstrate copy constructor

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	
	public:
		box();
		box(int a,int b,int c);
		~box()
		{
			cout<<"
		}
		
			
};

void box :: show()
{
	cout<<l<<b<<h<<endl;

}




box :: box(int i,int j,int k)
{
	l=i;
	b=j;
	h=k;
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
    
	box b5 = b2;
	
	b5.show();
	
	return 0;
}






