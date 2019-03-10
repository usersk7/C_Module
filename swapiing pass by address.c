//shubham kumbhar
//swapiing pass by address

/* O/P:
value berfore
10 20
value berfore
20 10
*/

#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int a= 10; int b = 20;

	printf("value berfore \n");
    printf("%d %d \n",a,b);
		
	printf("value berfore \n");
	swap(&a,&b);
		printf("%d %d",a,b);

}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
