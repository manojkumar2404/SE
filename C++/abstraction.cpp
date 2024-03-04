//abstraction is used to hide implemention part of the program
//only essential info. is display by the program

#include<iostream>
using namespace std;
class employee
{
	int a,b;
	public:
		employee(int x=90, int y=50)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"value of a "<<a<<" and b is "<<b;
		}
};
int main()
{
	employee obj;
	obj.display();
	
	return 0;
}
