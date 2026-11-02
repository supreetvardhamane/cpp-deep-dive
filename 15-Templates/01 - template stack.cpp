#include <iostream>
using namespace std;
template<class T>
class Stack
{
	private: 
		T *stk;
		int top;
		int size;
	public:
		Stack(int size)
		{
			this->size=size;
			top=-1;
			stk=new T[size];
		}
		void push(T x);
		T pop();
};
template<class T>
void Stack<T>::push(T x)
{
	if(top==size-1)
		cout<<"Stack is full"<<endl;
	else
		stk[++top]=x;
}
template<class T>
T Stack<T>::pop()
{
	if(top==-1)
		cout<<"Stack is empty"<<endl;
	return stk[top--];
}

int main()
{
	Stack<float> s(10);
	s.push(10.5f);
	s.push(20.6f);
	s.push(30.9f);
	float stop;
	stop=s.pop();
	cout<<stop<<endl;
	return 0;
}
