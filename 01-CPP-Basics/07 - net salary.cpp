#include <iostream>
using namespace std;
int main()
{
	float basic_sal,per_allowances,per_deductions;
	cout<<"Enter the basic salary: ";
	cin>>basic_sal;
	cout<<"Enter the percentage of allowances: ";
	cin>>per_allowances;
	cout<<"Enter the percentage of deductions: ";
	cin>>per_deductions;
	int net_sal=basic_sal*(1+per_allowances/100-per_deductions/100);
	cout<<"Net salary: "<<net_sal<<endl;
	return 0;
}
