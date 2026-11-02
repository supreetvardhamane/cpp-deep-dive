#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	float root1,root2;
	cout<<"Enter the coefficients of the quadratic equation: ";
	cin>>a>>b>>c;
	root1=(-b+sqrt(b*b-4*a*c))/(2*a);
	root2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"The roots of the given quadratic equation are: "<<root1<<" and "<<root2<<endl;
	return 0;
}

