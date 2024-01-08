
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
    in_line m;
    float a,b;
    cout << "Enter two values:\n";
    cin >>a>>b;
    cout <<"\nMultiplication value is:" << m.mul(a,b);
    
    cout <<"\n\nCube value is:"<< m.cube(a);

}