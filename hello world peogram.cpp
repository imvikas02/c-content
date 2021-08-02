#include<iostream>
using namespace std;
int sum=10;  //globle variable

void vikas(){
	cout<<sum;
}

int  main(){
	int sum= 1;
	  vikas();   //local variable 
	 cout<<sum;
	 
	
	cout<<"\n hello world";
}
