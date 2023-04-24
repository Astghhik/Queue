class Node
{
	public:
		int data;
		Node* next;
                
		Node(int value);
};

class Queue
{
	public:
		Node* front;
		Node* rear;
		int size;

		Queue();
		~Queue();
		int get_size();
		bool is_empty();
                bool is_full(); 
		int get_front();
		void enqueue(int x);
		void dequeue();

};
