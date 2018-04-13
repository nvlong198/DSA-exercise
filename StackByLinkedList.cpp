//#include <iostream>
//#include <stdexcept>
//
//using namespace std;
//
//
//struct node {
//	int element;
//	node* next;
//	node* pre;
//};
//class stack {
//public:
//	stack() {
//		head = null;
//		tail = null;
//		stacksize = 0;
//	}
//	void push(int value) {
//		node *tmp = new node;
//		tmp->element = value;
//		tmp->next = null;
//		tmp->pre = null;
//		 if stack is empty
//		if (head == null) {
//			head = tmp;
//			tail = tmp;
//		}
//		else {
//			tail->next = tmp;
//			tmp->pre = tail;
//			tail = tmp;
//		}
//		stacksize += 1; // stacksize = stacksize + 1;
//	}
//	int pop() {
//		if (head == null) {
//			throw out_of_range("invalid operation: stack is empty");
//		}
//		else if (head->next == null) {
//			int result = head->element;
//			head = null;
//			tail = null;
//			stacksize--;
//			return result;
//		}
//		else
//		{
//			int result = tail->element;
//			tail = tail->pre;
//			tail->next = null;
//			stacksize--;
//			return result;
//		}
//	}
//private:
//	node * head, *tail;
//	int stacksize;
//};
//int main() {
//	stack a = stack();
//	a.push(10);
//	a.push(5);
//	a.push(1);
//	cout << a.pop() << endl;
//	cout << a.pop() << endl;
//	cout << a.pop() << endl;
//	system("pause");
//	return 0;
//}
//
