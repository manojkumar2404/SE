#include<iostream>
using namespace std;
class addition
{
	int a;
	public:
		void get()
		{
			cout<<"\n enter value for a ";
			cin>>a;
		}
		void display()
		{
			cout<<"\n value of a is "<<a;
		}
		addition operator +(addition obj)
		{
			int ans;
			ans = a+obj.a;
			cout<<"\n answer is "<<ans;
		}
};

int main()
{
	addition obj1,obj2;
	cout<<"\n enter value for first object ";
	obj1.get();
	obj1.display();
	cout<<"\n enter value for second object ";
	obj2.get();
	obj2.display();
	obj1+obj2;
	
	return 0;
}