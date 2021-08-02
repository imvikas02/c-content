 #include<iostream>
using namespace std;
int sum(int a,int b)
{

	return a+b;
}
int sum(int a,int b, int c)
{

	return a+b+c;
}
int main()
{
int x,y,z;
cout<<"Enter any value ";
cin>>x>>y>>z;
cout<<"The value of two argument "<<sum(x,y)<<endl;
cout<<"The value of three argument "<<sum(x,y,z)<<endl;

	
}
