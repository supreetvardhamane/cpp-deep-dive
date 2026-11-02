#include <iostream>
using namespace std;

class Employee
{
	private: 
		int EmpID;
		string name;
	public: 
		Employee(int id,string name)
		{
			EmpID=id;
			this->name=name;
		}
		int getID(){return EmpID;}
		string getName(){return name;}
};
class FullTimeEmployee: public Employee
{
	private: int salary;
	public: 
		 FullTimeEmployee(int id,string name,int salary):Employee(id,name)
		{
			this->salary=salary;
		}
		 int getSal(){return salary;}
};
class PartTimeEmployee: public Employee
{
	private: int wage;
	public: 
		 PartTimeEmployee(int id,string name,int wage):Employee(id,name)
	{
		this->wage=wage;
	}
		 int getWage(){return wage;}
};
int main()
{
	FullTimeEmployee e1(202,"Supreet",15000);
	PartTimeEmployee e2(1212,"Nanditha",80000);
	cout<<"Salary of "<<e1.getName()<<" is "<<e1.getSal()<<endl;
	cout<<"Daily wage of "<<e2.getName()<<" is "<<e2.getWage()<<endl;
	return 0;
}

