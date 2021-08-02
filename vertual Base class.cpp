#include<iostream>
using namespace std;
class vikas{
	public:
	void name(){
		cout<<"this is called a virtual base class";
	}
};
class v2:public virtual vikas{
	
};
class v3:public virtual vikas{
	
};
class v4:public v2,public v3{
	
};
int main(){
     
	 v4 a1;
	 a1.name();

	
}





