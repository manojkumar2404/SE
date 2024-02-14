#include<iostream>
using namespace std;
class student
{
	protected:
	int roll_no;
};
class test: public student
{
	protected:
		int m1,m2;
};
class result:public test
{
	int totel;
	public:
		void get()
		{
			cout<<"enter roll_no ";
			cin>>roll_no;
			cout<<"enter two subject marks ";
			cin>>m1>>m2;
			totel=m1+m2;
		}
		void display()
		{
			cout<<"roll_no is "<<roll_no<<" totel mark is "<<totel;
		}
};
int main()
{
	result obj;
	obj.get();
	obj.display();
	
}