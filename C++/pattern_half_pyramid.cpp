#include<iostream>
using namespace std;
int main()
{
//	int n;
//	cin>>n;
//	
//	for(int i=n; i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}

// Half pyramid after 180` rotation
//	int n;
//	cin>>n;
//	
//	for(int i=1; i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(j<=n-i)
//			{
//			cout<<" ";
//			}
//			else
//			{
//			cout<<"*";
//			}
//		}
//		cout<<endl;
//	}

//int n;
//cin>> n;
//for(int i=1;i<=n;i++)
//{
//	for(int j=1;j<=i;j++)
//	{
//		cout<<i<<" ";
//	}
//	cout<<endl;
//}
//	return 0;
//}


//Floyd Triangle

int n;
int count=1;
cin>> n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
	{
		cout<<count;
		count++; 
	}
	cout<<endl;
}
	return 0;
}
