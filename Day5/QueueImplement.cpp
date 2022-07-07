#include<bits/stdc++.h>

using namespace std;

int front=-1;
int rear=-1;
int arr[10];
class queues
{
	public:
	void Enqueue(int val)
	{
		if(rear>=9)
		{
			cout<<"Queue is Full.";
		}
		else
		{
			arr[++rear]=val;
		}
	}	
	
	void Dequeue()
	{
		if(rear==-1||rear<front)
		{
			cout<<"Queue is Empty.";
		}
		else
		{
			cout<<"Dequeued Element: "<<arr[++front]<<" ";
			arr[front]=0;
		}
	}
	
	void display()
	{
		cout<<endl;
		cout<<"Elements Presented in Queue are: "<<endl;
		for(int i=front+1;i<=rear;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};
int main()
{
	queues q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Dequeue();
	q.Dequeue();
	q.Enqueue(40);
	q.Enqueue(50);
	q.Dequeue();
	q.display();
	return 0;
}
