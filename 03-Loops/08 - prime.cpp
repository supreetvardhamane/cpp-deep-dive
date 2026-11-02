#include <iostream>
using namespace std;
int main()
{
	int count,n;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		cout<<"It is a prime number \n";
	else
		cout<<"It's not a prime number\n";
	return 0;
}
