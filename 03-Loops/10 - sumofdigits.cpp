#include <iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter the number: ";
	cin>>n;
	int sum=0,m;
	m=n;
	while(n>0)
	{
		r=n%10;
		n/=10;
		sum+=r;
	}
	cout<<"Sum of digits of "<<m<<" is "<<sum<<endl;
	return 0;
}
