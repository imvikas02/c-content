#include<iostream>
using namespace std;
class agechecker{
	
	public:
		 agechecker(int age)
		{
			if(age>=18)
			{
				cout<<"your eligible for voting";
			}
			else
			{
				cout<<"you are not iligibale for voting";
			}
		}
};

int main()
{
	int c;
	cout<<"enter any value";
	cin>>c;
	agechecker  ages(c);
	
}
