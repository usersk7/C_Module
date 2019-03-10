//shubham kumbhar
//function overloading
#include<iostream>
using namespace std;

int sum(int a, int b);
double sum(double j,double k);

int main()
{
	int a,b;
	double j,k;
	
	int r1 = sum(1,1);                          //showing error      
	double r2 = sum(4.5f,2.2f);
   
    cout<<"int " <<r1<<endl;
	cout<<"float " <<r2<<endl;
	
    return 0 ;
}

int sum(int a,int b)
{
    cout<<"int ";
	return a+b;
}

double sum(double j,double k)
{
	 cout<<"double ";

	return j+k;
}

