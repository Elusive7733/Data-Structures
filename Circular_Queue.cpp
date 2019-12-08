#include <iostream>

using namespace std;

class circular_queue{
	public:
	
	int *storage;
	int front;
	int rear;
	int size;
	
	circular_queue(int _size = 5){
		size = _size;
		front = rear = 0;
		storage = new int [size];
	}
	
	bool is_empty(){
		if(front == rear){
			return true;
		}
		else{
			return false;
		}
	}
	bool is_full(){
		if(front == ((rear+1)%size)){
			true;
		}
		else{
			return false;
		}
	}
	
	void enqueue(int data = 0){
		if(!is_full()){
			storage[rear] = data;
			rear = (rear+1)%size;
		}
		else{
			cout << "Queue Full!\n";
		}
	}
	
	void dequeue(){
		if(!is_empty()){
			cout << storage[front] << " Dequeued\n";
			storage[front] = 0;
			front = (front+1)%size;
		}
		else{
			cout << "Queue Empty!\n";
		}
	}
	
	void peek(){
		if(!is_empty()){
			cout << storage[front] << " at Front\n";
		}
		else{
			cout << "Queue Empty!\n";
		}
	}
	void display(){
		for(int i = 0; i < size; i++){
			cout << storage[i] << endl;
		}
	}
};

int main(){
	circular_queue q(5);
	q.enqueue(10);
	q.enqueue(13);
	q.dequeue();
	q.dequeue();
	q.enqueue(15);
	q.dequeue();
	q.enqueue(18);
	q.enqueue(69);
	q.enqueue(17);
	q.dequeue();
	q.enqueue(16);
	q.enqueue(13);
	q.enqueue(22);
	q.display();
//	cout << q.rear;
	return 0;
}
