#include<iostream>
using namespace std;

inline int product(int a,int b)
{
	return a*b;
}
int main(){
	int a,b;
	cout<<"Enter value of a and b ";
	cin>>a>>b;
	cout<<"the sum of two two number "<<product(a,b);
}
