#include<iostream>
using namespace std;

int main()
{
	int password;
	
	cout<<"enter password for bruteforce ";
	cin>>password;
	
	for(int i=0; i<999999; i++)
	{
		if(i == password)
		{
			cout<<"bruteforce password is =  "<<i<<endl;
			break;
		}
		cout<<i<<"\n";
	}
}





           

