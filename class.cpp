/*
shubham kumbhar
class code practice
cpp class
*/
#include<iostream>
using namespace std;
class student
{
public:
	int makr;
	char grd;
	int roll;
};

int main()
{
	
	student s;
	cout<<"welcome   ";
	s.makr = 60;
	s.grd = 'c';
	s.roll = 70;
	cout<<s.makr<<"  ";
	cout<<s.grd<<" ";
	cout<<s.roll<<"  ";
}
