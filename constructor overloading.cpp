  #include<iostream>
using namespace std;
class agechecker{
	
	public:
		int a,b,c;
		 agechecker(int a,int b)
		 {
		 cout<<"value a" <<a<<" , "<<" value B"<<b<<endl;
		
		}
		 agechecker(int a)
		 {
		 cout<<"value a" <<a<<endl;
		
		}
		 agechecker(int a,double b)
		 {
		 cout<<"value a" <<a<<" , "<<" value B "<<b<<endl;
		
		}
};

int main()
{

	agechecker  ages(12,23);                         //ages Object
	agechecker  ages1(45); 
	agechecker  ages2(34,65.34); 
}
