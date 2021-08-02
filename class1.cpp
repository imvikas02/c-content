#include<iostream>
using namespace std;
class Animal
{
	private:
		char name[20],color[10];
		int  age;
	public:
		int price;
	
	void cow(){
		
		cout<<"Enter cow name "<<endl;
		cin.get(name,20);
			cout<<"Enter cow age "<<endl;
		cin>>age;
			cout<<"Enter cow color "<<endl;
		cin.get(color,20);
			cout<<"Enter cow price "<<endl;
		cin>>price;
		
		
			cout<<"cow name "<<name<<endl;	
		cout<<"cow age "<<age<<endl;
			cout<<"cow color"<<color<<endl;
		cout<<"cow price "<<price<<endl;
	}
		 
};
int main()
{
    Animal cowname;          //object
    cowname.cow();
     
}
