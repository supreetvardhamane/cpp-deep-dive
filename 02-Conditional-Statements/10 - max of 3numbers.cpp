#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers: ";
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<"Maximum is: "<<a<<endl;
	}
	else if(b>c)
	{
		cout<<"Maximun is: "<<b<<endl;
	}
	else{
		cout<<"Maximun is: "<<c<<endl;
	}
	return 0;
}
