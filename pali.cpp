#include<stdio.h>
#include"string.h"
int main()
{
	char s[20];
	int len,i,end=0;
	
printf("Input a string : ");
  scanf("%s",s);
 
 while(len != '\0')
 {
 	len++;
 }
 
 end = len-1;
 for(i=0;i<=len/2;i++,end--)
 {
 	if(s[i] != s[end])
 	{
 		
 		printf("hahaha this is not palindrome ");
 		return 0;
 	
	  		
	 }
	 
	 
 }
 
 
 printf("hah  palin ");
 
	
}
