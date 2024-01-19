#include<iostream>
using namespace std;
int main()
{
	int saving;
	cout<<"enter amount: "<<endl;
	cin>>saving;
	
	if(saving>5000)
	{
		if(saving>10000)
		{
			cout<<"roadtrip with neha"<<endl;
		}
		else
		{
			cout<<"shopping with neha"<<endl;
		}
	}
	else if(saving>2000)
	{
		cout<<"college\n";
	}
	else
	{
		cout<<"friends";
	}
	
}  