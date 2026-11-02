#include <iostream>
using namespace std;

class BasicCar
{
	public: 
		virtual void start()
		{
			cout<<"BasicCar started"<<endl;
		}
};
class AdvanceCar: public BasicCar
{
	public:
		void start()
		{
			cout<<"Advance car started"<<endl;
		}
};
int main()
{
	BasicCar *p=new AdvanceCar(); //pointer of basic car and object of advance car
	p->start();
	return 0;
}
