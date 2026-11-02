#include <iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	int vowel=0, cons=0, space=0;
	char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
	for(int i=0;s[i]!='\0';i++)
	{
		char ch=s[i];
		for(auto x:vowels){
		if(ch==x){
			vowel++;}
		break;
		else if(ch==' ')
			space++;
		else 
			cons++;
		}
	}
	cout<<"Number of vowels: "<<vowel<<endl;
	cout<<"Number of consonants: "<<cons<<endl;
	cout<<"Number of words in the string: "<<space+1<<endl;
	return 0;
}
