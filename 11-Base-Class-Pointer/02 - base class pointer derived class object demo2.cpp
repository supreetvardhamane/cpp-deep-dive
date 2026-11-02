#include <iostream>
using namespace std;

class Rectangle
{
	public: 
		void area()
		{
			cout<<"Area of rectangle"<<endl;
		}
};
class Cuboid:public Rectangle
{
	public: 
		void volume()
		{
			cout<<"Cuboid volume"<<endl;
		}
};
int main()
{
	Rectangle r;
	Cuboid *q=&r;

	Cuboid c;
	c.area();
	c.volume();
	return 0;
}
