#include <iostream>
using namespace std;

class Student
{
	public: int rollno;
		string name;
		static int addNo;
		Student(string n)
		{
			addNo++;
			rollno=addNo;
			name=n;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl<<"RollNo: "<<rollno<<endl;
		}
};
int Student::addNo=0;
int main()
{
	Student s1("John");
	Student s2("Ravi");
	Student s3("Khan");
	s1.display();
	s3.display();

	return 0;
}
