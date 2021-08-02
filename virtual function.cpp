#include<iostream>
using namespace std;
class A{
	public:
	int baseclass = 1;
	virtual void display()
	{
		cout<<"this is called a virtual function base class  "<<baseclass;
	}
};
class B:public A{
	public:
	int derivedclass =2;
	void display(){
		cout<<"this is called a virtual function derived class  "<<derivedclass;
	}
};
int main(){
	A *ptr_baseclass;
	A a1;
	B b1;
  ptr_baseclass = &b1; 
   ptr_baseclass->display();
}
