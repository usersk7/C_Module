//shubham kumbhar
//perfect no

#include<stdio.h>
int main()
{
	int n,no=0,temp,i;
	printf("enter no : ");
	scanf("%d", &n);
	int t1 = n;
	
	for(i=0; i < n; i++)
	{
		//printf(" adsouavbi no : %d \n",n);
		temp = t1 % i;
		
		if(temp == 0)
		{
			printf("divide by this no : %d",i);
			
			no = no+i;
		}
		
		
		
	}
		printf("divide by this no : %d",no);
	
}
