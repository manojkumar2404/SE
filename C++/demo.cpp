#include<iostream>
using namespace std;
int main()
{   
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	
	//program 1
//	if(n>10)
//	{
//		cout<<"no. is more than 10"<<endl;
//	}	
//	else if(n<10)
//	{
//		cout<<"no. is less than 10"<<endl;
//	}
//	else
//	{
//		cout<<"no. is equal to 10"<<endl;
//	}
	
	//program 2
	
	if(n%2==0 && n%3==0)
	{
		cout<<"divide by both"<<endl;
	}
	
	else if(n%2==0)
	{
		cout<<"divide by 2"<<endl;
	}
	
	else if(n%3==0)
	{
		cout<<"divide by 3"<<endl;
	}
	
	else
	{
		cout<<"not divide 2 or 3"<<endl;
	}


} 