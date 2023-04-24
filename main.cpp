#include <iostream>
#include "queue.hpp"

int main()
{  
	Queue q;
	
	q.enqueue(5);
	q.enqueue(10);
        q.enqueue(15);
	q.enqueue(9);
        
        std::cout<<"Queue size: "<<q.get_size()<<"\n";
        std::cout<<"Front of queue: "<<q.get_front()<<"\n";

	q.dequeue(); 
	std::cout<<"Queue size: "<<q.get_size()<<"\n";


	return 0;
}

