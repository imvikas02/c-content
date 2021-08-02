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
			cout<<"The id of Employee is "<<id<<endl;
		
		}
};

int main()
{
	Employee fb[4];
	for( int i=0;i<=4;i++)
	{
	fb[i].getid();
		
	}
for( int i=0;i<=4;i++)
	{
	fb[i].setid();
		
	}
}

