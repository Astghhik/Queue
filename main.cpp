#include <iostream>
#include "queue.hpp"

int main()
{  
	Queue q;
	
	q.enqueue(1);
	q.enqueue(2);
        q.enqueue(3);
	q.enqueue(4);
        
        std::cout<<"Queue size: "<<q.get_size()<<"\n";
        std::cout<<"Front of queue: "<<q.get_front()<<"\n";

	q.dequeue(); 
	std::cout<<"Queue size: "<<q.get_size()<<"\n";


	return 0;
}

