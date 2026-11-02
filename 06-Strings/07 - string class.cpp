#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s="Hello";
	cout<<s.length()<<endl;
	cout<<s.size()<<endl;
	s.resize(50);
	cout<<s.capacity()<<endl;
	cout<<s.max_size()<<endl;
	s.clear();
	cout<<s<<endl<<s.length()<<endl;
	if(s.empty())
		cout<<"String is empty"<<endl;
	else
		cout<<"String is not empty"<<endl;
	return 0;
}
