#include<iostream>
#include "Header.h"
using namespace std;

int main()
{
	Queue q(5);
	if (q.isempty())
	{
		cout << "Empty \n";
	}
	else{
		cout << " not Empty \n";
	}
	if (q.isfull())
	{
		cout << "FuLL \n";
	}
	else{
		cout << "not FuLL \n";
	}
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(9);
	q.enqueue(10);
	q.display();

	if (q.isempty())
	{
		cout << "Empty \n";
	}
	else{
		cout << " not Empty \n";
	}
	if (q.isfull())
	{
		cout << "FuLL \n";
	}
	else{
		cout << "not FuLL \n";
	}

	q.dequeue();
	q.dequeue();
	q.display();

	if (q.isempty())
	{
		cout << "Empty \n";
	}
	else{
		cout << " not Empty \n";
	}
	if (q.isfull())
	{
		cout << "FuLL \n";
	}
	else{
		cout << "not FuLL \n";
	}
}