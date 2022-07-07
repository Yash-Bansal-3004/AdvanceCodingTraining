#include<bits/stdc++.h>

using namespace std;

int top=-1;
int arr[10];
class stacky
{
	public:
	void push(int val)
	{
		if(top==9)
		{
			cout<<"Stack is Full.";
		}
		else
		{
			arr[++top]=val;
		}
	}

	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is Empty.";
		}
		else
		{
			cout<<arr[top]<<" ";
			arr[top--]=0;
		}
	}
	void display()
	{
		for(int i=0;i<=top;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};
int main()
{
	stacky s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.pop();
	s.push(40);
	s.push(50);
	s.pop();
	s.display();
//	for(int i=0;i<top;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	return 0;
}
