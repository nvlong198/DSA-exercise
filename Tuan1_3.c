#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i; i < n; i++){
        cin >> arr[i];
    }


    for(int i; i < n; i++){
        cout << arr[i];
    }
}
