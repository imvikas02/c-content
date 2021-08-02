#include<iostream>
using namespace std;
class Animal{
	public:
		Animal(){
			cout<<"this is called a multiple inheritance"<<endl;
		}
};
class Cow{
	public:
	   Cow(){
		cout<<"this is called a cow sub class";
	}

};
class child:public Animal, public Cow{

};
int main()
{
	child a1;


}
