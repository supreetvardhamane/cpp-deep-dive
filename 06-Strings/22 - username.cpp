#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string email;
	cout<<"Enter the email address: ";
	cin>>email;
	string username = email.substr(0,email.find('@'));
	bool valid = false;
	for(int i=0;username[i]!='\0';i++)
	{
		char ch = username[i];
		if((ch>=65&&ch<=90)||ch=='_'||ch=='.')
			valid=true;
		else if(isalnum(ch))
			valid=true;
	}
	if(valid)
		cout<<"Valid username"<<endl;
	else
		cout<<"Invalid username"<<endl;

	return 0;
}
