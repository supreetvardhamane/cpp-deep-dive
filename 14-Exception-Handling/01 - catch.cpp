#include <iostream>
using namespace std;

class parent: public exception
{
};
class Child: public parent
{
};

int main()
{
	try
	{
		throw parent();
	}
	catch(...)
	{
		cout<<"Error occured"<<endl;
	}
	return 0;
}
