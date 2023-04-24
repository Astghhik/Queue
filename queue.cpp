#include <iostream>
#include "queue.hpp"

Node::Node(int x)
{
	data = x;
	next = NULL;
}

Queue::Queue()
{
	front = rear = NULL;
	size = 0;
}

Queue::~Queue()
{
	while(!is_empty())
	{
		dequeue();
	}
}

int Queue::get_size()
{
	return size;
}

bool Queue::is_empty()
{
    return( get_size()== 0);
}
int Queue::get_front()
{
	if(is_empty())
	{
		std::cout<<"Queue is empty";
		return -1;
	}
	return front->data;
}

void Queue::enqueue(int x)
{
	Node* new_node = new Node(x);

	if(rear ==NULL)
	{
		front = rear = new_node;
	}
	else
	{
		rear->next = new_node;
		rear = new_node;
	}
	size++;
}

void Queue::dequeue()
{
	if(front == NULL)
	{
		std::cout<<"Queue is empty";
		return;
	}

	Node* tmp = front;
	if(front == rear)
	{
	front = rear = NULL;
	}
        else
	{
		front = front->next;
	}
	delete tmp;
	size--;
}

