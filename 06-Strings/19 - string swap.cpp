#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="Programming";
	str.erase(2);
	cout<<str<<endl;
	str.push_back('h');
	cout<<str<<endl;
	str.pop_back();
	cout<<str<<endl;
	string s1="Programming";
	string s2="language";
	cout<<s1<<" "<<s2<<endl;
	s1.swap(s2);
	cout<<s1<<" "<<s2<<endl;
	return 0;
}
