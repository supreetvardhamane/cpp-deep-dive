#include <iostream>
using namespace std;
int main()
{
	int A[]={2,4,6,8,12,3,5,7,9,11};
	int sum=0;
	for(int x:A){
		sum+=x;
	}
	cout<<"Sum of all elements is "<<sum<<endl;
	return 0;
}
