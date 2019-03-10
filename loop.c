#include<stdio.h>
int main()
{
	int i,j;
	printf("*\n");
	
	
	for(i=1;i<=7;i++)
	{
		printf("*");
		
		for(j=0;j<=2*i-1;j++)
	{
		printf(" ");	
	}
	
	printf("*\n");
	
		
	}
	
	for(j=1;j<=7+2;j++)
	{
		printf("* ");
	}
	
	
	
}
