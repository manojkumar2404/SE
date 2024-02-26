//template is derived datatype
#include<iostream>
using namespace std;
template <typename T>
void maximum(T a,T b)
{
	if(a>b)
	{
		cout<<"a is big";
	}
	else{
		cout<<"b is big";
	}
}
int main()
{
//	maximum<int>(5,2);
//	maximum<float>(5.27,5.50);
	maximum<char>('a','c');
	return 0;
}
