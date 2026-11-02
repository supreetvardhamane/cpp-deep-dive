#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
	public:
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
};

int main()
{
	unique_ptr<Rectangle> ptr(new Rectangle(10,5));
	cout<<ptr->area()<<endl;
	unique_ptr<Rectangle> ptr1;
	ptr1=move(ptr);
	cout<<ptr1->area()<<endl;
	return 0;
}

