//shubham kumbhar;
//pointer

#include<iostream>
using namespace std;

int main()
{
	int a=10;
	cout<<"val a  "<<a<<"\n";
	int *p = &a;
	*p=20;
	int **q = &p;
	int *j = &a;
	
	*j=15;
	
	
	
	cout<<"val a  "<<a<<"\n";
	cout<<"val of p  "<<p<<"\n\n";
	cout<<"val of ptr p   "<<*p<<"\n";
    cout<<"add of a   "<<&a<<"\n";
    cout<<"add of p  "<<&p<<"\n\n";
    
    cout<<"val of q  "<<q<<"\n";
    cout<<"val of ptr q  "<<**q<<"\n";
    cout<<"add of q  "<<&q<<"\n\n";
    
    
    cout<<"val of j  "<<j<<"\n";
    cout<<"val of ptr j  "<<*j<<"\n";
    cout<<"add of j  "<<&j<<"\n";
    
    
	
}
