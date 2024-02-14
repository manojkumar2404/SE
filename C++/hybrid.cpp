#include<iostream>
using namespace std;
class A
{
	protected:
		int m1,m2;
	
};
class B: public A
{
	protected:
		int totel;
		public:
		void sum()
		{
			cout<<"enter values ";
			cin>>m1>>m2;
			totel=m1+m2;
			cout<<"totel is "<<totel;
		}
};
class C
{
	protected:
		int roll_no;
		public:
			void get_roll()
			{
				cout<<"enter roll_no";
				cin>>roll_no;
			}
};
class D:public C, public B
{
	int pr;
	public:
		void display()
		{
			pr=totel*100/200;
			cout<<"roll_no is "<<roll_no;
			cout<<"pr is";
		}
		
};
int main()
{
	D obj;
	obj.get_roll();
	obj.sum();
	obj.display();
}