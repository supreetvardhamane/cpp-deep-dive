#include <iostream>
using namespace std;
int main(){
	int billAmt,discount;
	cout<<"Enter the bill amount: ";
	cin>>billAmt;
	if(billAmt<100)
		discount=0;
	else if(billAmt>=100&&billAmt<500)
		discount=billAmt*0.1;
	else if(billAmt>=500)
		discount=billAmt*0.2;
	cout<<"Bill Amount: "<<billAmt<<endl;
	cout<<"Discount amout: "<<discount<<endl;
	cout<<"Total Bill Amount: "<<(billAmt-discount)<<endl;
	return 0;
}

