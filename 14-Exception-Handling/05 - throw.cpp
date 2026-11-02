#include <iostream>
using namespace std;

class MyException: public exception
{
};

int division(int a,int b) throw(int)
{
	try
	{
		if(b==0)
			throw 101;
		return a/b;
	}
}
int main()
{
	int x=10,y=0,z;
	z=division(x,y);
	cout<<z<<endl;
	catch(int e)
	{
		cout<<"Division by zero"<<endl<<"Error code: "<<e<<endl;
	}
	cout<<"Program terminated"<<endl;
	return 0;
}
