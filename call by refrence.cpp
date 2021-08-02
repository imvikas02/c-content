 #include<iostream>
 using namespace std;
 int refrence(int* a, int* b)
 {
 	int temp;
 	temp = *a;
 	*a = *b;
 	*b  = temp;
 	
 	cout<<"After the swapping value of a "<<*a<<endl;
 	cout<<"After the swapping value of b "<<*b<<endl;
 		
 }
 
 int main()
 {
 	int x,y;
 	cout<<"Enter the value of a ";
 	cin>>x;
 	cout<<"Enter the value of b ";
 	cin>>y;
 	refrence(&x,&y);
 }
