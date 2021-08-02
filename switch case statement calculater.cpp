 #include<iostream>
 using namespace std;
 int main()
 {
 	
 	int a,b,c,operation;
 	cout<<"Enter first number";
 	cin>>a;
 	
 	cout<<"Enter second number";
 	cin>>b;	
	 cout<<"Enter any operation";
 	cin>>operation;
 	 switch(operation)
 	 {
 	 	case '+':
 	          c=a+b;
 	 	cout<<"operation result"<<c;
 	 	break;
 	 	
 	 	
 	 	case '-':
 	 	c=a-b;
 	 	cout<<"operation result"<<c;
 	 		break;
 	 		
 	 	case '*':
 	 	c=a*b;\
 	 	cout<<"operation result"<<c;
 	 		break;
 	 	
 	 	case '/':
 	 	c=a/b;
 	 	cout<<"operation result"<<c;
 	 		break;
 	 		
 	 		
 	 		default:
 	 				cout<<" noting any operation";
 	 				break;
	  }
	  cout<<c;
 	
 }
