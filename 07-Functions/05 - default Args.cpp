#include <iostream>
using namespace std;
int sum(int a,int b,int c=0)
{
	return a+b+c;
}
int main()
{
	cout<<sum(2,3)<<endl;
	cout<<sum(12,33,44)<<endl;
	return 0;
}
