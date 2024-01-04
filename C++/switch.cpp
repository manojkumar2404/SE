#include<iostream>
using namespace std;
int main()
{
	int button;
	cout<<"enter your greet: ";
	cin>>button;
	
	
	switch(button)
	{
		case 1:
			cout<<"hello"<<endl;
			break;
		case 2:
			cout<<"nameste"<<endl;
			break;
		case 3:
			cout<<"salut"<<endl;
			break;
		case 4:
			cout<<"ciao"<<endl;
			break;
		default :
			cout<<"i am still learning more"<<endl;	
			break;			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//else-if
//	char button;
//	cout<<"enter your greet: ";
//	cin>>button;
//	
//	if(button =='a')
//	{
//		cout<<"hello"<<endl;
//	}
//	else if(button =='b')
//	{
//		cout<<"Nameste"<<endl;
//	}
//		else if(button =='c')
//	{
//		cout<<"salut"<<endl;
//	}
//		else if(button =='d')
//	{
//		cout<<"ciao"<<endl;
//	}
//	else
//	{
//		cout<<"i am still learning more";
//	}
}