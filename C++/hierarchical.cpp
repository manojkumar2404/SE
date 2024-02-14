#include<iostream>
using namespace std;
class value
{
	protected:
		int height,length;
		public:
			void get()
			{
				cout<<"enter values";
				cin>>height>>length;
			}
};
class tringle:public value
{
	public:
		void area1()
		{
			cout<<"area of triangle is "<<0.5*height*length;
		}
};
class rect:public value
{
	public:
		void area2()
		{
			cout<<"area of triangle is "<<height*length;
		}
};

int main()
{
	tringle obj1;
	rect obj2;
	int ch;
	cout<<"enter 1 for triangle and 2 for rect";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			obj1.get();
			obj1.area1();
			break;
		case 2:
			obj2.get();
			obj2.area2();
			break;
		default:
			cout<<"invalid ";		
	}
	
}