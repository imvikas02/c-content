#include<iostream>
using namespace std;
struct vikas{
	char name[20];
	float salary;
	int id;
};
int main()
{
	struct vikas p1;
	cout<<"***********Information of vikas************\n";
	cout<<"Full Name of vikas ";
	cin.get(p1.name,20);
		cout<<" Salary of vikas ";
	cin>>p1.salary;
		cout<<"Id of vikas ";
	cin>>p1.id;
	
		cout<<"ID = "<<p1.id<<endl;
	cout<<"name = "<<p1.name<<endl;
cout<<"Salary = "<<p1.salary<<endl;	

	
	
}
