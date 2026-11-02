#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int v,u,a;
	float distance;
	cout<<"Enter v,u and a: ";
	cin>>v>>u>>a;
	distance=(pow(v,2)-pow(u,2))/(2*a);
	cout<<"The distance is "<<distance<<endl;
	return 0;
}
