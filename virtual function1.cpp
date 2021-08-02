#include<iostream>
using namespace std;
class A{
	int base = 5;
	public:
    virtual 	void display()
	{
		cout<<"the value of base class  "<<base<<endl;
	}
};
class B:public A{
	int derived = 10;
	public:
		void display(){
			cout<<"The value of Derived class  " <<derived;
		}
		
};
int main()
{
	A *a1; 
	A aa1;                                            //base clas pointer
	B b1;                               //derived class object
	a1= &b1;
	 a1->display();
}
