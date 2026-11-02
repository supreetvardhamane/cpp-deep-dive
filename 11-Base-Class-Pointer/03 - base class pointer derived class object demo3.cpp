#include <iostream>
using namespace std;

class BasicCar
{
	public: 
		void start()
		{
			cout<<"Car started"<<endl;
		}
};
class AdvanceCar: public BasicCar
{
	public: 
		void playMusic()
		{
			cout<<"Music playing"<<endl;
		}
};
int main()
{
	AdvanceCar a;
	a.start();
	a.playMusic();
	return 0;
}
