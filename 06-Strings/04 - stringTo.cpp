#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[10]="123.3232";
	char s2[10]="53.24";
	long int x = strtol(s1,NULL,10);
	float y = strtof(s2,NULL);
	cout<<x+20<<endl<<y+10<<endl;
	return 0;
}
