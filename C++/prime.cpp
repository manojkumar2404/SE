#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cout<<"enter a number ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		if((n%i)==0)
		{
			p++;	
		}
	}
	if(p==2)
	{
		cout<<n<<" prime no. \n";
	}
	else
	{
		cout<<n<<" non prime no. \n";
	}
	
}