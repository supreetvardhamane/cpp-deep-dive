#include <iostream>
using namespace std;
int main()
{
	int n,m,rev=0,digit;
	cout<<"Enter the number: ";
	cin>>n;
	m=n;
	while(n>0)
	{
		digit=n%10;
		n/=10;
		rev=rev*10+digit;
	}
	if(rev==m){
		cout<<"It is a palindrome"<<endl;
	}
	else{
		cout<<"It is not a palindrome"<<endl;
	}
	return 0;
}
