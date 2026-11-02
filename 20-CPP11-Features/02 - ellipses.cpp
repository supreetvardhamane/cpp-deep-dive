#include <iostream>
#include <stdarg.h>
using namespace std;

int sum(int n,...)
{
	va_list list;
	va_start(list,n);
	int s,x;
	for(int i=0;i<n;i++)
	{
		x=va_arg(list,int);
		s+=x;
	}
	return s;
}
int main()
{
	cout<<sum(3,10,30,40);
	return 0;
}

