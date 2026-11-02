#include <iostream>
using namespace std;

template <class T>
T maxim(T a,T b)
{
	return (a>b)?a:b;
}
int main()
{
	cout<<maxim(34,67)<<endl;
	cout<<maxim(12.34f, 45.43f)<<endl;
	cout<<maxim('A','W')<<endl;
	return 0;
}
