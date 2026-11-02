#include <iostream>
using namespace std;

class Base
{
	public:
		void fun1()
		{
			cout<<"fun2 from base"<<endl;
		}
		void fun2()
		{
			cout<<"fun2 from base"<<endl
		}
};
class Derived: public Base
{
};

int main()
{
	return 0;
}

