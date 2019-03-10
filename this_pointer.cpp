//shubham kumbhar
//using this pointer

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	public:
		box(int l,int b,int h)
		{
			this -> l=l; // this.l =  l;
			this -> b=b; // this.b = b ;
			this -> h = h; //this -> h=h; / [Error] request for member 'h' in '(box*)this', which is of pointer type 'box*' (maybe you meant to use '->' ?)
			
		}
		
		void show()
		{
			cout<<this -> l<<this -> b<<this -> h<<endl;
		}
};

int main()
{
	box k(3,4,4);
	k.show();
	box s(4,8,9);
	s.show();
	return 0;
}
