#include <iostream>
using namespace std;
int division(int a,int b)
{
	if(b==0)
		throw 101;
	return a/b;
}
int main()
{
	int x=10,y=0;
	try
	{
		int c=division(x,y);
		cout<<c<<endl;
	}
	catch(int e)
	{
		cout<<"Error occured!"<<endl<<"Error code "<<e<<endl;
	}
	return 0;
}
