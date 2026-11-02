#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="Hello";
	cout<<str.capacity()<<endl;
	str.append("World");
	cout<<str.capacity()<<endl;
	cout<<str<<endl;
	return 0;
}
