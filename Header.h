#include<iostream>
using namespace std;

class Queue
{
	int front;
	int rear;
	int *arr;
	int max_size;
	int count;
public:
	Queue(int size)
	{
		arr = new int[size];
		max_size = size;
		count = 0;
		front = 0;
		rear = 0;
	}
	bool isfull()
	{
		if (count == max_size)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool isempty()
	{
		if (count <= 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void display()
	{
		cout << "Queue is: ";
		for (int i = front; i < rear; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void enqueue(int data)
	{
		arr[rear++] = data;
		count++;
	}

	int dequeue()
	{
		int temp = arr[front];
		for (int i = 0; i < count; i++)
		{
			arr[i] = arr[i + 1];
		}
		rear--;
		count--;
		return temp;
	}

};