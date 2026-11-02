#include <iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter the number of rows of Matrix A: ";
	cin>>r1;
	cout<<"Enter the number of columns of Matrix A: ";
	cin>>c1;
	cout<<"Enter the number of rows of Matrix B: ";
	cin>>r2;
	cout<<"Enter the number of columns of Matrix B: ";
	cin>>c2;
	int A[r1][c1],B[r2][c2];
	if(r1!=c2)
	{
		cout<<"Error! Matrices can't be multiplied!"<<endl;
		return 1;
	}
	int C[r1][c2];
	cout<<"Enter Matrix A: ";
	for(auto &x:A){
		for(auto &y:x){
			cin>>y;
		}
	}
	cout<<"Enter Matrix B: ";
	for(auto &x:B){
		for(auto &y:x){
			cin>>y;
		}
	}
	cout<<"Matrix C: "<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			for(int k=0;k<c1;k++){
				C[i][j]+=A[i][k]*B[k][j];
				cout<<C[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}
