//max number
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 no.\n";
	cin>>a>>b>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"max no. is: "<<a<<endl;
		}
		else{
			cout<<"max no. is: "<<c<<endl;
		}
	}
	else{
		if(b>c)
		{
			cout<<"max no. is: "<<b<<endl;
		}
		else{
			cout<<"max no. is: "<<c<<endl;
		}
	}
}