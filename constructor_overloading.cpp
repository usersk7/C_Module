//shubham kumbhar
//constructor  overloading
#include<iostream>
using namespace std;

class cal{
	
	int a,b,c;
	float j,d;
	
	public:
		cal();
		cal(int);
		cal(int ,int);
		cal(float,int,int);
};

cal :: cal()
{
cout<<"non-para \n";
}


cal :: cal(int)
{
cout<<"one value \n";

}


cal :: cal(int,int)
{
	
cout<<"two val \n";

}


cal :: cal(float,int,int)
{
	cout<<"three \n";
}

int main()
{
	cal c;
	cal c1(20);
	cal c2(10,30);
	cal c3(2.5,6,4);
	return 0;
	}


