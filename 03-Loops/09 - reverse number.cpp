#include <iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Reverse of the number: ";
	while(n>0){
		r=n%10;
		n/=10;
		cout<<r;
	}
	cout<<endl;
	return 0;
}
