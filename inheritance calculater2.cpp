#include<iostream>
using namespace std;
class simplecal{
	public:
		int a,b;
	int getdata(){
		cout<<"Enter any value";
		cin>>a;
		cout<<endl;
		cout<<"Enter any value";
		cin>>b;
	}
	int performoperation(){
		cout<<"Ans of + operation " <<a+b<<endl;
		cout<<"Ans of - operation " <<a-b<<endl;
		cout<<"Ans of * operation " <<a*b<<endl;
		cout<<"Ans of / operation " <<a/b<<endl;
		
	}
};
int main()
{
	simplecal a1;
	a1.getdata();
	a1.performoperation();
}
