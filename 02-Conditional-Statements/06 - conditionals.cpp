#include <iostream>
using namespace std;
int main()
{
	int roll;
	cout<<"Enter your Roll number: ";
	cin>>roll;
	if(roll<1)
	{
		cout<<"Invalid Roll number!"<<endl;
	}
	else
	{
		cout<<"Valid roll number"<<endl;
	}
	return 0;
}
