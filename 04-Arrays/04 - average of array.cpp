#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements of array: ";
	cin>>n;
	int A[n];
	cout<<"Enter the elements of the array:"<<endl;
	for(auto &x:A)
		cin>>x;
	float sum=0.0;
	for(auto x:A)
		sum+=x;
	cout<<"Average = "<<sum/n<<endl;
	return 0;
}

