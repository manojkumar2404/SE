#include<iostream>
using namespace std;
int main()
{
	int n,sum,firstdigit,lastdigit;
	
	cout<<"enter any number ";
	cin>>n;
	
	firstdigit = n;
	lastdigit = n%10;
	
	for(firstdigit=n; firstdigit<=10; firstdigit=firstdigit/10)
	
		cout<<"first digit"<<n<<"is "<<firstdigit<<endl;
		cout<<"last digit"<<n<<"is "<<lastdigit<<endl;
	
	cout<<"sum of first and last digit"<<n<<"is "<<firstdigit+lastdigit<<endl;
}