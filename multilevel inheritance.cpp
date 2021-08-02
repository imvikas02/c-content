#include<iostream>
using namespace std;
class A{
	public:
		void example(){
			int a=10;
			cout<<"this vikas called a multilevel inheritance";
		}
};
class B: public A{

};
class C: public B{
	
};
int main()
{
	C a1;

	a1.example();
}
