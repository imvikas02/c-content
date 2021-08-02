#include<iostream>
using namespace std;
class real{
	public:
	int real1,imagenary;
	void getdata(){
		cout<<" numeber  "<<real1<<endl;
		cout<<"number  "<<imagenary;
	
	}
	int  showdata(int a,int b)
	{
		real1 = a;
		imagenary = b;
	}
};

int main()
{
//	real r1;
//	real *ptr = &r1;
     real *ptr = new real;
	ptr->showdata(12,34);
	ptr->getdata();
}
