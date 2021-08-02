 #include<iostream>
using namespace std;
union vikas{                            //union me ak bar me ak hi variable ka use hota he
	char name[20];                    //it is use for memory management 
	float salary;
	int id;
};
int main()
{
	union vikas p1;
	cout<<"***********Information of vikas************\n";
	cout<<"Full Name of vikas ";
	cin.get(p1.name,20);
	cout<<"name = "<<p1.name<<endl;
}

	
	

