#include<iostream>
using namespace std;
class Box{
	int width;
	public:
		friend void printbox(Box box);
		void switchbox(int wid)
		{
			width = wid;
		}
};

void printbox(Box box)
{
	cout<<"The width of Box "<<box.width;
}
int main()
{
	Box box;
	box.switchbox(16);
	printbox(box);
	
}
