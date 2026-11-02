#include <iostream>
using namespace std;

int linear_search(int a[],int n,int key)
{
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
			break;
		}
	}
	return -1;
}
int main()
{
	int arr[]={2,3,7,8,10,43,87};
	int k;
	cout<<"Enter the key: ";
	cin>>k;
	int index=linear_search(arr,7,k);
	cout<<"Element found at index: "<<index<<endl;
	return 0;
}
