#include<iostream>
using namespace std;
class simplecalculater{
	public:
		int a,b,x,c;
		void vikas(){
		
		cout<<"Enter any number";
		cin>>a;
		cout<<"Enter second no";
		cin>>b;
		cout<<"Enter any operater";
		cin>>x;
	}
	       int switc(int x)
		   {
			case '+':
				c= a+b;
				cout<<c;
				break;
			case '-':
				c= a-b;
				cout<<c;
				break;
			case '*':
				c= a*b;
				cout<<c;
				break;
			case '/':
				c= a/b;
				cout<<c;
				break;
				default:
					cout<<"please Enter any value";
					break;
				
		}
};

int main()
{
   simplecalculater  s1;
   
   s1.vikas();
   s1.switc();
	
}
