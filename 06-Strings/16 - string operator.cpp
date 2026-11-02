#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="Holiday";
	string str1="Hello";
	string str2=" World";
	string str3=str2;
	cout<<str1<<endl;
	str1=str1=str2;
	cout<<str1<<endl;
	str1=str1+" Goodbye";
	cout<<str3<<endl;
	cout<<str1<<endl;
	str[4]='M';
	cout<<str<<endl;
	return 0;
}
