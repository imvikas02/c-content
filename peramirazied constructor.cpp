 #include<iostream>
 using namespace std;
 class car{
 	string name;
 	string brand;
 	int prize;
 	public:
 car(string x,string y, int z){                                       
 		
 		name = x;
 		brand = y;
 		prize  = z;
	 }
 };
 
 int main()
 {
  car obj1("vikas","VERMA",20000);
  car obj2("vikas","VERMA",90000);
cout<<obj1.name<<obj1.brand<<obj1.prize;
 }
