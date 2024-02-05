#include<iostream>
using namespace std;
class calculator
{
	public:
		void add(int a,int b)
		{
			cout<<"Addition "<<a+b<<endl;;
		}
		void sub(int a,int b)
		{
			cout<<"Subtraction "<<a-b<<endl;
		}
		void mul(int a,int b)
		{
			cout<<"Multiply "<<a*b<<endl;
		}
		void div(float a,float b)
		{
			cout<<"division "<<a/b<<endl;
		}
		
		void mod(int a,int b)
		{
			cout<<"Modulo "<<a%b<<endl;
		}		
};

int main()
{
	int a,b;
	cout<<"enter two no. ";
	cin>>a>>b;
		
	calculator c;
	c.add(a,b);
	c.sub(a,b);
	c.mul(a,b);
	c.div(a,b);
	c.mod(a,b);
	
}
