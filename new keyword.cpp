 #include<iostream>
 using namespace std;
 int main(){
 	int a =10;
 	int *ptr = &a;
 	
 	cout<<"the value of normal pointer  "<<*ptr<<endl;
 	
 	
// 	New keyword

    int *b = new int(20);                                 // use NEW Keyword dynamic  tarike se value  dena
    cout<<"the value of new keyword pointer "<<*b;




 } 
