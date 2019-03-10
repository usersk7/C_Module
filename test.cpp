//shubham kumbhar
//function overloading
#include<iostream>
using namespace std;

int sum(int a, int b);
float sum(float j,float k);

int main()
{
	int a,b;
	float j,k;
	float r2 = sum(4.4f,2.2f);
	int r1 = sum(1,1);                          //showing error      
	  
    cout <<r1<<endl;
	cout <<r2<<endl;
	
    return 0 ;
}

int sum(int a,int b)
{
	cout<<"int "<< a+b;
}

float sum(float j,float k)
{
   cout<<"float "<< j+k;
}

