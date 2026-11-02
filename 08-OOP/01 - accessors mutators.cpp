#include <iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		void setter(int l,int b){
			if(l>=0 && b>=0){
			length=l;
			breadth=b;
			}
			else{
				cout<<"Invalid length or breadth"<<endl;
			}
		}
		int getLength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}

		int area(){
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
};
int main()
{
	Rectangle r1;
	r1.setter(10,-5);
	cout<<r1.area()<<endl;
	return 0;
}

