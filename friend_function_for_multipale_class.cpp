//shubham kumbhar
//friend_function_for_multipale_class

#include<iostream>
using namespace std;

class Beta;
class Alpha
{
	int x;
	public:
	
	 friend void compare(Alpha,Beta);
	
		void get()
		{
			cout<<"enter val x  "<<endl;
			cin >>x;
		}
};



class Beta
{
	int y;
	public:
	
	 friend void compare(Alpha,Beta);
	
		void set()
		{
			cout<<"enter val y "<<endl;
			cin >>y;
		}

};



 
 void compare(Alpha A,Beta B)
{

		if(A.x>B.y)
		{
			 cout<<A.x<<"is greater";
			
		}
		else{
			
			 cout<<B.y<<" is greater";	
		}
			
}			



int main()
{
	Alpha A;
	Beta B;
	A.get();
	B.set();
	compare(A,B);
	
	return 0;
}









