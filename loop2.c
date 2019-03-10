#include<stdio.h>
int main()
{
	int i,j,no=1;
char a[]={"ABCD"};
char *p =a;
	
	for(i=0;i<=3;i++)
	{
				for(j=3;j>=i;j--)
			{
				printf(" ");	
			}
		
			for(j=0;j<=i;j++)
			{
				printf("%c ",a[i]);
				p++;	
			}
		
		
		printf("\n");
	}
		
}


/*



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



*/
