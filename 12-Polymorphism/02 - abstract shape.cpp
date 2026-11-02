#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual int area()=0;
		virtual int perimeter()=0;
};
class Rectangle:public Shape
{
	private: int length;
		 int breadth;
	public: Rectangle(int l=1,int b=1)
		{
			length=l;
			breadth=b;
		}
		int area(){return length*breadth;}
		int perimeter(){return 2*(length+breadth);}
};
class Circle:public Shape
{
	private: int radius;
	public: Circle(int r=1)
		{
			radius=r;
		}
		int area(){return 3.14*radius*radius;}
		int perimeter(){return 2*3.14*radius;}
};
int main()
{
	Shape *s=new Rectangle(10,5);
	cout<<"Area of rectangle: "<<s->area()<<endl;
	cout<<"Perimeter of Rectangle: "<<s->perimeter()<<endl;

	s=new Circle(10);
	cout<<"Area of circle: "<<s->area()<<endl;
	cout<<"Circumferene of circle: "<<s->perimeter()<<endl;
	return 0;
}
