//shubham kumbhar
//pointer and array

#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4};
	
	int *p = arr;
	
	for(int i=0;i<4;i++)
	{
	cout<<*p;
	
	*p++;
	
	}
	
	
}
