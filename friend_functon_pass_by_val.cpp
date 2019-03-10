//shubham kumbhar
//friend_functon_pass_by_val

#include<iostream>
using namespace std;

class student
{
	int roll;
	float per;
	char gread;
	
	public:
		void get()
		{
			cout<<" enter value of roll percent and  gread : "<<endl;
			cin >>roll>>per>>gread;
		}
			
		friend void show(student &);		
};

	void show(student &p)
	{
	       cout<<"roll per nad gread is  : "<<p.roll<<"  "<<p.per<<"  "<<p.gread<<endl;
	}
			
		
int main()
{
	student s,s1;
	s.get();
	s1.get();
	show(s);
	show(s1);
	return 0;
}






