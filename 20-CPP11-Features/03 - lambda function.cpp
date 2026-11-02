#include <iostream>
using namespace std;
int main()
{
	int a = ([](int x,int y)->int{return x+y;}(10,30));
	cout<<a<<endl;
	return 0;
}
