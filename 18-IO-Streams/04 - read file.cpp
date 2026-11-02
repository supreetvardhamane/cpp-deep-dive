#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("My.txt");
	if(ifs)cout<<"File is open"<<endl;
	if(ifs.is_open())cout<<"File is open confirmed"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	//inorder;
	ifs.close();
	cout<<"Name: "<<name<<endl;
	cout<<"Roll: "<<roll<<endl;
	cout<<"Branch: "<<branch<<endl;
	return 0;
}

