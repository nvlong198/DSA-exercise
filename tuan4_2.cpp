#include <iostream>
#include <stack>

using namespace std;

void Check(stack <char> q, string ss){

    stack <char> sampleStack = q;
    string s = ss;
    for(int i = 0 ; i < s.length(); i++){

        if(s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}' ){
            if(sampleStack.empty()){
                sampleStack.push(s[i]);
            }else if(  ( s[i]==')' && sampleStack.top()=='(' )
                    || ( s[i]==']' && sampleStack.top()=='[' )
                    || ( s[i]=='}' && sampleStack.top()=='{' ) ){
                sampleStack.pop();
            }
            else{
                sampleStack.push(s[i]);
            }
        }
    }

    if(sampleStack.empty()){
        cout << "yes";
    }
    else cout << "no";
}

struct Create{
    string s;
    stack <char> sampleStack;
};

int main(){
    int number;
    cin >> number;
    Create structStack[number];

    for( int i = 0; i < number; i++){
        cin >> structStack[i].s;
    }

    for( int i = 0; i < number; i++){
        Check( structStack[i].sampleStack, structStack[i].s );
        cout << "\n";
    }

    return 0;
}
