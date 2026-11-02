#include <iostream>
using namespace std;

int main()
{
	int x=10,y=2,z;
	try
	{
		if(y==0)
			throw 101;
		z=x/y;
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"Division by zero"<<endl<<"Erro code: "<<e<<endl;
	}
	return 0;
}
