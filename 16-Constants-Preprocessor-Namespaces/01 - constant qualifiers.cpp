#include <iostream>
using namespace std;

int main()
{
	//const int x=10;
	//int const y=20;//both are same
	int x=10;
	int *ptr=&x;
	++(*ptr);
	cout<<*ptr<<" "<<x<<endl;
	return 0;
}
