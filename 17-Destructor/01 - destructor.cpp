#include <iostream>
using namespace std;

class Demo
{
	public: Demo()
		{
			cout<<"Constructor of demo"<<endl;
		}
		~Demo()
		{
			cout<<"Destructor of demo"<<endl;
		}
};
void fun()
{
	Demo d;
}
int main()
{
	//fun();
	Demo d;
	return 0;
}
