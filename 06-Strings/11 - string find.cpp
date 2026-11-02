#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="How are you?";
	cout<<str.find("are")<<endl<<str.rfind('o')<<endl;
	return 0;
}
