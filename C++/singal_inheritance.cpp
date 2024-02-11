#include<iostream>
using namespace std;
class student
{
	//private:obj and child class
	//protected :obj can't use
	protected:
		int roll_no;
		string name;
};
class result:public student
{
	float pr;
	public:
		void get()
		{
			cout<<"enter roll_no and name ";
			cin>>roll_no;
			cout<<"enter percentage ";
			cin>>pr;
		}
		void display()
		{
			cout<<"name is "<<name<<" id is "<<roll_no<<" percentage is "<<pr;
		}
};
int main()
{
	result obj;
	obj.get();
	obj.display();
	
}