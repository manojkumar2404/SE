#include<iostream>
#define pi 3.14
using namespace std;
class formula
{
	int ans,height,breadth;
	public:
		
		void area()
		{
			cout<<"enter height and breadth for rectangle ";
			cin>>height>>breadth;
			ans = height* breadth;
			cout<<"rectangle area is "<<ans;	
		}
		void area(int h,int w)
		{
			ans = 1/2*h*w;
			cout<<"triangle area is "<<ans;	
		}
		void area(double a)
		{
			ans = pi*a*a;
			cout<<"circle area is "<<ans;
		}
	
	
};
int main()
{
	int choice;
	cout<<"press 1 for rectangle \n 2 for triangle \n 3 for circle \n";
	cin>>choice;
	
	switch(choice)
	{
		formula obj;
		case 1:
			obj.area();
			break;
		case 2:
			obj.area(5,7);
			break;
		case 3:
			obj.area(6);
			break;
		default:
			cout<<"plz enter valid choice";			
		break;
	}
}