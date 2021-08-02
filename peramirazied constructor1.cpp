 #include<iostream>
using namespace std;
class agechecker{
	
	public:
		int a,b,c;
		 agechecker(int a,int b,int c)
		{
			if((a>b) &&(a>c))
			{
				cout<<" A is big";
			}
			else if( (b>a)&&(b>c))
			{
				cout<<"now b is big";
			}
			else
			{
				cout<<"c is big";
			}
		}
};

int main()
{
	int x,y,z;
	cout<<"enter A value ";
	cin>>x;
		cout<<"enter b value ";
			cin>>y;
			cout<<"enter c value  ";
				cin>>z;
	agechecker  ages(x,y,z);                         //ages Object
	
}
