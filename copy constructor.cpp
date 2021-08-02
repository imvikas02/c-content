 #include<iostream>
using namespace std;
class agechecker{
	
	public:
		int a, b,x;
	
		agechecker(int a){
			x = a;
		
		}
		
			agechecker(agechecker &obj){
			
		       x = obj.x;
		}
		
        void display()
		{
			cout<<"copy of the constructor ages object "<<x<<endl;
		}
	
};

int main()
{
	agechecker  ages(12);                         //ages Object
	agechecker ages1(ages);
	ages1.display();
	ages.display();
}
