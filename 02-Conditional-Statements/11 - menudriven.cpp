#include <iostream>
using namespace std;
int main(){
	cout<<"Menu\n";
	cout<<"1. Add\n2. Subtract\n3. Multiple\n4. Divide"<<endl;
	cout<<"Enter your choice: ";
	int choice,a,b;
	cin>>choice;
	cout<<"Enter the 2 operands: ";
	cin>>a>>b;
	switch(choice){
		case 1: cout<<"Add: "<<a+b<<endl;
			break;
		case 2: cout<<"Subtract: "<<a-b<<endl;
			break;
		case 3: cout<<"Multiply: "<<a*b<<endl;
			break;
		case 4: cout<<"Divide: "<<a/b<<endl;
		}
	return 0;
}

