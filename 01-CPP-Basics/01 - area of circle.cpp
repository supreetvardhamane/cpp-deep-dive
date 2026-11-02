#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float rad,area;
	cout<<"Enter the radius of the circle: ";
	cin>>rad;
	area=(float)22/7*pow(rad,2);
	cout<<"Area of the circle is "<<area<<endl;
	return 0;
}
