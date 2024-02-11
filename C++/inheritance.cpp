//inheritance is used to link two or more classes together
// in inheritance one class is parent class another class is child class

#include<iostream>
using namespace std;
//parent/base class
class student
{
	public:
		void info()
		{
			cout<<"\n hello this is info function of parent class";
		}
};
//child/derived
class result: public student
{
	public:
		void info1()
		{
			cout<<"\n hello this is info1 function of child class";
		}
};
int main()
{
	result r1;
	r1.info1();
	r1.info();
	
	return 0;
}