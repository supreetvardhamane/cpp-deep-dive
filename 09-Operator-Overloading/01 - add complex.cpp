#include <iostream>
using namespace std;
class Complex
{
	public: int real;
		 int img;
	public: Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		Complex operator+(Complex x)
		{
			Complex temp;
			temp.real=real+x.real;
			temp.img=img+x.img;
			return temp;
		}
};
int main()
{
	Complex c1(5,7);
	Complex c2(3,4);
	Complex c3;
	c3=c1+c2;
	cout<<"C3="<<c3.real<<"+i"<<c3.img<<endl;
	return 0;
}
