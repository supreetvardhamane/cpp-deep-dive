#include <iostream>
using namespace std;

class StackOverflow: public exception{};
class StackUnderflow: public exception{};
class Stack
{
	private: int *stk;
		 int top=-1;
		 int size;
	public: Stack(int size)
		{
			this->size=size;
			stk=new int [size];
		}
		void push(int x)
		{
			if(top==size-1)
				throw StackOverflow();
			stk[++top]=x;
		}
		int pop()
		{
			if(top==-1)
				throw StackUnderflow();
			return stk[top--];
		}
};
int main()
{
	Stack s(3);
	try{
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	}
	catch(StackOverflow e)
	{
		cout<<"StackOverflow"<<endl;
	}
	catch(StackUnderflow e)
	{
		cout<<"StackUnderflow"<<endl;
	}
	return 0;
}
