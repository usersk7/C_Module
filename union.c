/*
shubham kumbhar
19-2-19
calss practice
union */
#include<stdio.h>
int main()
{
	union student{
		
		char name[30];
	  //  int roll;
	//	int per;
	};
	
	union student s;
	printf(" size %d \n",sizeof(s));
//	s.roll = 10;
//	s.per = 60;
//	s.name = 's';
	
//	printf("this is s.roll user for uderstanding %d\n ",s.roll);
//	printf("thils is only %%d %d");
//	printf("%d",s.per);
//	printf("%s",s.name);
}
