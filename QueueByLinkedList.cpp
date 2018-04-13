//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//
//struct Node {
//	int element;
//	Node* next;
//	Node* pre;
//};
//class Queue {
//public:
//	Queue() {
//		head = NULL;
//		tail = NULL;
//		queueSize = 0;
//	}
//	void enqueue(int value) {
//		Node *tmp = new Node;
//		tmp->element = value;
//		tmp->next = NULL;
//		tmp->pre = NULL;
//		// If stack is empty
//		if (head == NULL) {
//			head = tmp;
//			tail = tmp;
//		}
//		else {
//			tail->next = tmp;
//			tmp->pre = tail;
//			tail = tmp;
//		}
//		queueSize += 1; // stackSize = stackSize + 1;
//	}
//	int dequeue() {
//		if (head == NULL) {
//			throw out_of_range("Invalid operation: Stack is empty");
//		}
//		else if (head->next == NULL) {
//			int result = head->element;
//			head = NULL;
//			tail = NULL;
//			queueSize--;
//			return result;
//		}
//		else
//		{
//			int result = head->element;
//			head = head->next;
//			head->pre = NULL;
//			queueSize--;
//			return result;
//		}
//	}
//private:
//	Node *head, *tail;
//	int queueSize;
//};
//int main() {
//	Queue a = Queue();
//	a.enqueue(10);
//	a.enqueue(1);
//	a.enqueue(5);
//	cout << a.dequeue() << endl;
//	cout << a.dequeue() << endl;
//	cout << a.dequeue() << endl;
//	system("pause");
//	return 0;
//}
//
//
