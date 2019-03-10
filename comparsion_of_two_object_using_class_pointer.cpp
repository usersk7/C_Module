//shubham kumbhar
//comparsion_of_two_object_using_class_pointer

#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	
	public:
		void get()
		{
			cout<<"value of l b h "<<endl;
			cin >>l>>b>>h;
			}
		
		void show()
		{
	          cout<<l<<b<<h<<endl;
	    }
		
		int comp(box *);
			
};


box :: comp(box *p)
{
	int x,y;
	x=l*b*h;
	y=p->l*p->b*p->h;
	
	
	if(x==y)
	  return 0;
	if(x>y)
	  return 1;
	else 
	  return -1;	
}

int main()
{
	box b1,b2;
	
	b1.get();
	b2.get();
	b1.show();
	b2.show();
	
	int r = b1.comp(&b2);
	if(r==0)
	 cout<<"both eqale";
	else if(r==1)
	 cout<<"B1 is greater";
	else
	 cout<<"B2 is greater";
	
	
	
	
	
	return 0;
}






