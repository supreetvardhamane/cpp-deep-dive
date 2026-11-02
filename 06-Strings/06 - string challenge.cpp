#include <iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	int vowel=0,consonant=0,space=0;
	for(int i=0;s[i]!='\0';i++)
	{
		char ch=s[i];
		if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		{
			char A[]={'a','e','i','o','u','A','E','I','O','U'};
			for(auto x:A){
				if(ch==x)
				{
					vowel++;
					break;
				}
			}
			if(ch==' ')
			{
				space++;
				if(s[i+1]==' ')
					continue;
			}
			else 
				consonant++;
		}
	}
	cout<<"Number of vowels: "<<vowel<<endl;
	cout<<"Number of consonants: "<<consonant<<endl;
	cout<<"Number of words: "<<space+1<<endl;
	return 0;
}

