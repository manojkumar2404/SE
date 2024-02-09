
#include<iostream>
using namespace std;
class in_line 
{
	public:
    inline float mul(float x, float y) 
	{
        return (x*y);
    }
    inline float cube(float x) 
	{
        return (x*x*x);
    }
};

int main() 
{
    in_line l;
    float a,b;
    cout << "Enter two values:\n";
    cin >>a>>b;
    cout <<"\nMultiplication value is:" << l.mul(a,b);
    
    cout <<"\n\nCube value is:"<< l.cube(a);

}