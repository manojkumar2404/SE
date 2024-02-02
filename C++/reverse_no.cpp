#include<iostream>
using namespace std;
 int main()
 {
 	int reverse=0 ,n;
 	cout<<"enter no. you want to reverse ";
 	cin>>n;
 	
 	while( n>0)
 	{
 		int lastdigit= n%10;
		 
		 reverse= reverse*10 + lastdigit;
		 n= n/10;	
	}
	 cout<<reverse<<endl;
 }