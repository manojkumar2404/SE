#include<iostream>
using namespace std;
int main()
{
	int n,sum,firstdigit,lastdigit;
	
	cout<<"enter any number ";
	cin>>n;
	
	lastdigit = n%10;
	
	while(n >=10)
	{
		n= n/10;
	}
	firstdigit = n;
	
	sum = firstdigit + lastdigit;
	
	cout<<"sum of first and last digit = "<<sum;
	
	return 0;
}

