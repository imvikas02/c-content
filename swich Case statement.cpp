 #include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	switch(age)
	{
		case 18:
			cout<<"you are elegible for voting";
			break;
	
	case 22:
			cout<<"you are age is 22";
	break;
	case 12:
			cout<<"you are elegible for voting"<<endl;
		break;
			default :
			  cout<<"you are not Exist in world";
			}
		
	return 0;
}
