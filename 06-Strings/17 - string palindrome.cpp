#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the sting: ";
	cin>>s;
	string s2;
	int j=0;
	for(int i=s.length();i>=0;i--){
		s2[j++]=s[i];
	}
	if(!s.compare(s2)){
		cout<<"Palindrome"<<endl;
	}
	else
		cout<<"Not palindrome"<<endl;
	return 0;
}
