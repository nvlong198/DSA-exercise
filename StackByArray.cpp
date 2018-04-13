#include <iostream>
#include <stdexcept>
using namespace std;
class Stack{
public:
    Stack(){
        stackSize = 0;
    }
    void push(int value){
        stackSize = stackSize + 1;
        if (stackSize > capacity){
            cout << "Stack is full.";
            return;
        } else {
            elements[stackSize-1] = value;
            return;
        }
    }
    int pop(){
        if (stackSize == 0){
            cout << "Stack is empty";
            throw out_of_range("Stack is empty");
        } else {
            stackSize  = stackSize - 1;
            return elements[stackSize];
        }
    }
private:
    int elements[100];
    int stackSize;
    int capacity = 100;
};
int main(){
    Stack a = Stack();
    a.push(10);
    a.push(5);
    a.push(1);
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop();
    return 0;
}
