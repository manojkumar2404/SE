#include<ctime>
#include<iostream>
using namespace std;
class person
{
	public:
	void info();   //decalare
};
//scope resolution opertor ::
//defination
void person:: info()
{
	cout<<"Welcom To ATM Systam";
}
int main()
{
	time_t now = time(0);
	
	char* dt= ctime(&now);
	
	cout<<"The Local date and time is:"<<dt<<endl;
	person obj;
	obj.info();
	
	return 0;
}