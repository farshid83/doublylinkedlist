/*
 * queue.cpp
 *
 */
#include <iostream>
using namespace std;

typedef struct
{
	int key;
	void* past;
	void* post;
}element;

class QUEUE
{
public:
	int size;
	element* head;
	element* tail;

	QUEUE()
	{
		size = 0;
		head = 0;
		tail = 0;
	}

	element* makenew(int id)
	{
		element* e = new element;
		e->key = id;
		return e;
	}

	void enqueue(element* e) // to the end
	{
		e->post = 0;
		e->past = tail;
		if(tail != 0)
			tail->post = e;
		else
			head = e;
		tail = e;
		size++;
	};

	element* dequeue() // from the head
	{
		element* e = head;
		if(head != 0)
		{
			head = (element*)(head->post);
			if(head != 0)
			{
				head->past = 0;
			}
			else
				tail = 0;
			size--;
		}
		else
		{
			//head = 0;
		}
		return e;
	};
};

int main()
{
	QUEUE q;
	element* e;

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	e = q.makenew(rand());
	q.enqueue(e);
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";

	q.dequeue();
	cout << q.size << "\n";
	return 0;
}
