#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	if(b==0)
		cout<<"Division by Zero"<<endl;
	else
	{
		c=a/b;
		cout<<"Division: "<<c<<endl;
	}
	return 0;
}
