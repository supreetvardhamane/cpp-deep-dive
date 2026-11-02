#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="Programming";
	cout<<str.substr(3)<<endl<<str.substr(3,4)<<endl;
	string s1="Hello";
	string s2="Hello";
	cout<<s1.compare(s2)<<endl;
	return 0;
}
