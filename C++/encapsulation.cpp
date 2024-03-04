//encapsulation is process of binding data and function together
#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		void get()
		{
			cout<<"enter id ";
			cin>>id;
		}
		void display()
		{
			cout<<"id is "<<id;
		}
};
int main()
{
	employee obj;
	obj.get();
	obj.display();
}