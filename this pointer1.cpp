#include<iostream>
using namespace std;
class text{
	int x;
	int y;
	public:
		text(int x,int y){
		this->	x = x;
		this->	y = y;
		}
		
		text &obj1(int a){
			x = a;
			return *this;
		}
			text &obj2(int b){
			y = b;
			return *this;
			
		}
		
		void getdata()
		{
			cout<<"the value of a is "<<x<<endl<<y;
		}
};
int main()
{
	text a1(2,4);
	a1.obj1(10).obj2(20);
	a1.getdata();
}
