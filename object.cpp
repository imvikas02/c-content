#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		void getid(void)
		{
			cout<<"Enter Employee Id "<<endl;
			cin>>id;

		}
		
		void setid(void)
		{
			cout<<"The id of Employee is "<<id;
		
		}
};

int main()
{
	Employee harry;
	
	harry.getid();
	harry.setid();
	
}
