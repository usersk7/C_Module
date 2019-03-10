/*
shubham kumbhar
21-2-19
class and function.
*/
#include<iostream>
using namespace std;

class student
{
	int id;
	
	char name;
	int mkr;
		
	public:
		
	 	student();
		void show();
		
};

 student :: student()
{
	cout<<"enter id name  and makrs";
	cin>>id>>name>>mkr;
	
}

void student :: show()
{
	cout<<id <<name <<mkr ;

}
int main()
{
	student s1;
	//cout<<sizeof(s1);
	
//	s.get();
	s1.show();	
	
	
}
