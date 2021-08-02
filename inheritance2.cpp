#include<iostream>
using namespace std;
class vikas{
	public:
	int id;
	char name[20];
    float salary;
	void vikas1(){
		cout<<"Enter any Id Number"<<endl;
		cin>>id;
		cout<<"Enter any name"<<endl;
		cin.get(name,7);
		cout<<"Enter any salary"<<endl;
		cin>>salary;
	
	}
};
class verma:public vikas
{
	public:
   void verma2(){
		cout<<"Id Number"<<id<<endl;
		cout<<"name"<<name<<endl;
		cout<<"salary"<<salary<<endl;

	
	}
};
int main()
{
	vikas v1;
	verma v2;
	v1.vikas1();
	v2.verma2();
}
