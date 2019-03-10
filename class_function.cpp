/*
shubham kumbhar
19-2-19
class and function.
*/
#include<iostream>
using namespace std;

class student
{
	public:
		int id;
		char name;
		int mkr;
		
		void get();
		void show();
		
};

void student :: get()
{
	cout <<"enter id name  and makrs";
	cin >>id>>name>>mkr;
	
}

void student :: show()
{
	cout<<id <<name <<mkr ;

}
int main()
{
	student s;
	
	s.get();
	s.show();	
return 0;	
	
}
