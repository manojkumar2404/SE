#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter your marks ";
	cin>>n;
	
	if(n<35)
	{
		cout<<"Grade F";
	}
	else if(n>=35 && n<60)
	{
		cout<<"Grade D";
	}
	else if(n>=60 && n<70)
	{
		cout<<"Grade C";
	}
	else if(n>=70 && n<80)
	{
		cout<<"Grade B";
	}
	else if(n>=80 && n<90)
	{
		cout<<"Grade A";
	}
	else
	{
		cout<<"Grade A++";
	}
}