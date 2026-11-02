#include <iostream>
using namespace std;

class Rational
{
	private: int p;
		 int q;
	public: 
		 Rational(int p=1,int q=1)
		 {
			 this->p=p;
			 this->q=q;
		 }
		 Rational operator+(Rational r2)
		 {
			 Rational temp;
			 temp.p=this->p*r2.q+r2.p*this->q;
			 temp.q=this->q*r2.q;
			 return temp;
		 }
		 friend ostream& operator<<(ostream &out,Rational r1);
};
ostream& operator<<(ostream &out, Rational r1)
{
	out<<r1.p<<"/"<<r1.q;
	return out;
}
int main()
{
	Rational r1(3,4),r2(5,2),r3;
	r3=r1+r2;
	cout<<r3<<endl;
	return 0;
}
