#include <iostream>
using namespace std;

int strLen(string s){
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
int main()
{
	string str;
	cout<<"Enter the string: ";
	cin>>str;
	while(str!="exit")
	{
		cout<<"String length: "<<strLen(str)<<endl;
		cout<<"Enter a string: ";
		cin>>str;
	}
	return 0;
}

