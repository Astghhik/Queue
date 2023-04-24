class Node
{
	public:
		int data;
		Node* next;
                
		//Constructor that to built new node with given data
		Node(int value);
};

class Queue
{
	public:
		Node* front;
		Node* rear;
		int size;

		//Constructor
		Queue();

		//Destructor
		~Queue();
                
		//Return the size of the queue
		int get_size();
                
		//Return true if the queue is empty,false otherwise
		bool is_empty();
                bool is_full(); 
		//Return the value of the front node of the queue without removing it
		int get_front();
                
	        //Ads a new node with the given value to the rear of the queue	
		void enqueue(int x);
                
		//Removes the front node from the queue
		void dequeue();

};
