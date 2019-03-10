//shubham kumbhar
//swapiing pass by value
/*
o/p:  
value berfore
10 20
value berfore
10 20

*/

#include<stdio.h>

void swap(int a,int b);

int main()
{
	int a= 10; int b = 20;

	printf("value berfore \n");
    printf("%d %d \n",a,b);
		
	printf("value berfore \n");
	swap(a,b);
	printf("%d %d",a,b); //this will printed same value.

}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
//	printf("%d %d",a,b); this will printed swap value
	
}
