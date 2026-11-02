#include <iostream>
#include <fstream>
using namespace std;

class Student
{
	public:
		string name;
		int roll;
		string branch;
		friend ofstream & operator<<(ofstream &ofs,Student &s);
		friend ifstream & operator>>(ifstream &ifs,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
	return ofs;
}
ifstream & operator>>(ifstream &ifs,Student &s)
{
	ifs>>s.name>>s.roll>>s.branch;
	return ifs;
}
int main()
{
	Student s1;
	//s1.name="John";s1.roll=25;s1.branch="CSE";
	ifstream ifs("student.txt");
	//ofs<<s1.name<<endl;
	//ofs<<s1.roll<<endl;
	//ofs<<s1.branch<<endl;
	//ofs<<s1; //invalid
	ifs>>s1;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Roll: "<<s1.roll<<endl;
	cout<<"Branch: "<<s1.branch<<endl;
	ifs.close();
	return 0;
}
