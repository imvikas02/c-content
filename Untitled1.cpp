#include<iostream>
using namespace std;
class vikas{
	protected:
	int a = 10;
	public:
		int b=20;
}; 

class verma:public vikas
{
public:	
cout<<a;
cin>>b;
};
int main()
{
	vikas a1;
	verma v2;
cout<<a1.b;
cout<<v2.b;	
}
