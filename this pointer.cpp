#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void setdata(int a){
		this->a = a;
		}
		void getdata()
		{
			cout<<"the value of a is "<<a;
		}
};
int main()
{
	A a1;
	a1.setdata(4);
	a1.getdata();
}
