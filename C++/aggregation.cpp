//aggregation is used to create has a relationship among two or more classes..
#include<iostream>
using namespace std;
class result{
	public:
	float pr;
	char grade;
	public:
		result(int pr1,char grade1)
		{
			pr=pr1;
			grade=grade1;
		}
};
class student{
	int id;
	string name;
	result *ref;
	public:
		student(int id1,string name1,result *ref1)
		{
			id=id1;
			name=name1;
			ref=ref1;
		}
		void display()
		{
			cout<<"id is "<<id<<" name is "<<name<<" grade is "<<ref->grade<<" pr is "<<ref->pr;
		}
		
};
int main()
{
	result obj(70,'A');
	student obj1(101,"xyz",&obj);
	obj1.display();
	return 0;
}
