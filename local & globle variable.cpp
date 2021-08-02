#include<iostream>
using namespace std;
int sum=10;  //globle variable

void vikas(){
	cout<<sum;
}

int  main(){
	int sum= 1;
	bool ex = true;         //Boolean Variable 
	  vikas();   //local variable     
	 cout<<sum;
	 cout<<"\nBoolean Variable true or false  "<<ex;
	 
	
	
}
