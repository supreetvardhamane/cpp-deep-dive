#include <iostream>
using namespace std;
int main()
{
	int sum=0,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		sum+=i;
	cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;;
	return 0;
}
