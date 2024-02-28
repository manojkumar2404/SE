//polymorphism : 2 type
//1. compile time a. method overloading b. operator overloading
//2. run time

//method overloading 1. diff. number of parameter 2. diff. type of argument 
#include<iostream>
using namespace std;
class calculator
{
	int num1,num2;
	double ans;
	
	public: 
		void result()
		{
			cout<<"enter 2 values for addition ";
			cin>>num1>>num2;
			
			ans= num1+num2;
			cout<<"addition is"<<ans;
		}
		
		void result(int x, int y)
		{
			ans= x-y;
			cout<<"subtraction is"<<ans;
		}
		void result(double x,double y)
		{
			ans= x*y;
			cout<<"multiplication is"<<ans;
		}
		void result(double x)
		{
			double y;
			cout<<"enter 2nd value for division of double datatype";
			cin>>y;
			
			if(y==0)
			{
				cout<<"can't divide by zero";
			}
			else
			{
			ans= x/y;
			cout<<"division is"<<ans;	
			}
		}
		void result(int x)
		{
			int y;
			cout<<"enter 2nd value for modulo of int datatype";
			cin>>y;
			ans= x%y;
			cout<<"modulo is "<<ans;
		}
	
};

int main()
{
	int choice;
	cout<<"press 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for modulo \n";
	cin>>choice;
	
	switch(choice)
	{
		calculator obj;
		case 1:
			obj.result();
			break;
		case 2:
			obj.result(5,2);
			break;
		case 3:
			obj.result(6.5,3.20);
			break;
		case 4:
			obj.result(10.5);
			break;
		case 5:
			obj.result(10);
			break;
		default:
			cout<<"invalid choice";			
	}
	
	return 0;	
}