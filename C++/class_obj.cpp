#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		
		string name;

void msg()
{
	cout<<"im method from class student";
}
};
int main()
{
	student obj;
	
	cout<<"enter roll_no ";
	cin>>obj.roll_no;
	cout<<obj.roll_no<<endl;
	obj.name="Manoj";
	cout<<obj.name<<endl;
	obj.msg();
	return 0;
}