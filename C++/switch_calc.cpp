#include<iostream>
using namespace std; 
int main()
{
	int a,b;
	cout<<"enter two number: "<<endl; 
	cin>>a>>b;
	
	char choice;
	cout<<"enter a choice: "<<endl;
	cin>>choice;
	
	switch(choice)
	{
	
	
	case '+':
		cout<<"addition is: "<<a+b<<endl;
		break;
	case '-':
		cout<<"subtraction is: "<<a-b<<endl;
		break;
	case '*':
		cout<<"multiplication is: "<<a*b<<endl;
		break;

	case '/':
		cout<<"division is: "<<a/b<<endl;
		break;
		
	default:
		cout<<"plz enter valid choice"<<endl;
		break;
}}