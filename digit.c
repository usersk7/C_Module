//shubham kumbhar
//date 17-2-19
//addition of five digit 


#include<stdio.h>
int main()
{
	int digit,rev,n,sum=0;
	printf("Enter five digit no : ");
	scanf("%d",&rev);
	n = rev;
	while(n>0)
	{
	digit = n % 10;
	sum = sum + digit;
	n = n/10;
	}
	printf("sum of this %d is %d",rev,sum);
	
	return 0 ;
	
}
