
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any no :"<<endl;
	cin>>n;
	
	int sum;
	for(int counter=1;counter<=n;counter++)
	{
		sum=sum+counter;
	}
	cout<<"sum is : "<<sum<<endl;
}