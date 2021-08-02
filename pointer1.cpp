#include<iostream>
using namespace std;
int main()
{
int a=3;
int *b = &a;                                    //basic of pointer             
cout<<"address of A in memory "<<&a<<endl;	     //  '&' address of variabe 
cout<<"address of A in memory "<<b<<endl;	    //   '*' value of variable
cout<<"value of A in memory "<<*b<<endl;	
}
