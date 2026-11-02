#include <iostream>
using namespace std;
class Complex
{
	private: int real;
		 int img;
	public: Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		friend ostream& operator<<(ostream &o,Complex &c1);
};
ostream& operator<<(ostream &o,Complex &c1)
{
	o<<c1.real<<"+i"<<c1.img;
	return o;
}
int main()
{
	Complex c1(5,9);
	cout<<c1<<endl;
	return 0;
}

