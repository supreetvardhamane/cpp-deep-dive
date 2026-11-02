#include <iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun}; //can assign only the value which have been defined in the enum
int main()
{
	day d;
	d=wed;
	cout<<d++<<endl;
	return 0;
}
