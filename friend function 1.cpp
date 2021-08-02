#include<iostream>
using namespace std;
class y;
class x
{
int data;
public:
void sumdata(int value)
{
     data = value;
	}	
    friend void adddata(x,y);
};
class y
{
int value1;
public:
void sumdata1(int data1)
{
	value1 = data1;
	}	
	friend void adddata(x,y);
	
};

void adddata(x o1,y o2)
{
	cout<<"the sum of two number"<<o1.data + o2.value1;
}

int main()
{
x obj;
y obj2;
obj.sumdata(12);
obj2.sumdata1(20);	
adddata(obj,obj2);
}
