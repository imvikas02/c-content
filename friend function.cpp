#include<iostream>
using namespace std;
class money
{
	public:
		
	 void sum(int a, int b)
	 {
	
	 	int c;
	 	c= a+b;
	 	cout<<c;
	 }
	 friend money extra();
};

money extra()
{
	int c;
	cout<<"output of two variable  "<<c;
}

int main()
{
  money	pesa;
  pesa.sum(4,6);
}
