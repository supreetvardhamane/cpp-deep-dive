#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char *s;
	cout<<"Enter a string: ";
	cin.getline(s,100);
	cout<<"Length of string is "<<strlen(s)<<endl;
	return 0;
}
