#include<iostream>
using namespace std;
class Employee{
	int id;

	public:
		void getid()
		{
			cout<<"Enter Employee Id "<<endl;
			cin>>id;
		}
		void setid(void)
		{
			cout<<"The id of Employee"<<id;
		
		}
};

int main()
{
	Employee harry;
	harry.getid();
	
//	
//	Employee fb[4];
//	
}
