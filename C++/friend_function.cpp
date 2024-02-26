//friend function
#include<iostream>
using namespace std;
class addition{
	
	int a,b;
		public:
		void get()
		{
			cout<<"enter value for num1 and num2 ";
			cin>>a>>b;
		}
	friend void add_num(addition);	
};
void add_num(addition a1)
{
	cout<<"addition is "<<a1.a+a1.b;
}
int main()
{
	addition obj;
	obj.get();
	add_num(obj);
	return 0;
}
