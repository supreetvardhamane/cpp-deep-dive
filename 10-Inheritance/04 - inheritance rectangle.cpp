#include <iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle();
		Rectangle(int l,int b);
		Rectangle(Rectangle &r);
		int getLength(){return length;};
		int getBreadth(){return breadth;};
		void setLength(int l);
		void setBreadth(int b);
		int area();
		int perimeter();
		bool isSquare();
		~Rectangle();
};
class Cuboid: public Rectangle
{
	private: int height;
	public: 
		 Cuboid(int h)
		 {
			 height=h;
		 }
		 int getheight(){return height;}
		 void setheight(int h){height=h;}
		 int volume(){return area()*height;}
};
int main()
{
	Cuboid c(5);
	c.setLength(10);
	c.setBreadth(7);
	cout<<"Volume: "<<c.volume()<<endl;
}
Rectangle::Rectangle()
{
	length=1;
	breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
	setLength(l);
	setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
	length=l;
}
void Rectangle::setBreadth(int b)
{
	breadth=b;
}
int Rectangle::area()
{
	return length*breadth;
}
int Rectangle::perimeter()
{
	return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
	return length==breadth;
}
Rectangle::~Rectangle()
{
	cout<<"Rectangle destroyed"<<endl;
}

