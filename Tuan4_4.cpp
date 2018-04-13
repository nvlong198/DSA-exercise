#include <iostream>
#include <stack>

using namespace std;

struct stackTest{
    stack<int> q;
};

int main(){
    int n, m, x;

    cin >> n >> m >> x;
    stackTest stack_[2];

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input >= 0){
            stack_[0].q.push(input);
        }

    }
    for(int i = 0; i < m; i++){
        int input;
        cin >> input;
        if(input >= 0){
            stack_[1].q.push(input);
        }
    }

    int point = 0;
    int counter = 0;
    for(int i = 0; i < x; i++ ){
        if(counter > x){
            break;
        }

        if(stack_[0].q.top() < stack_[1].q.top()){
            counter += stack_[0].q.top();
            stack_[0].q.pop();
            point++;
        }
        else{
            counter += stack_[1].q.top();
            stack_[1].q.pop();
            point++;
        }
    }

    cout << point;

    return 0;
}
