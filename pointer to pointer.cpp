 #include<iostream>
using namespace std;
int main()
{
int a=3;
int *b = &a;                                              
cout<<"address of A in memory  using  A  "<<&a<<endl;	     
cout<<"address of A in memory using B Poiner variable "<<b<<endl;	    
cout<<"value of A in memory "<<*b<<endl;


int **c;          //pointer to pointer variable
c = &b;           //store pointer variable address

cout<<"pointer variable  B address "<<&b<<endl;
cout<<"pointer variable  B address "<<c<<endl;
cout<<"pointer variable  B address "<<*c<<endl;	p
cout<<"pointer variable  B address "<<**c<<endl;	
	

}
