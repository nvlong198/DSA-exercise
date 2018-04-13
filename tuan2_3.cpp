#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int i;
    char c;
    cin >> i >> c;
    str.insert(i, 1, c);
    cout << str ;
}
