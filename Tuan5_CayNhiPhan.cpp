#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    int temp;
    int leng = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < leng; i++){
        cin >> arr[i] >> temp;
    }

    sort(arr, arr+leng);
    bool isBinary = true;

    for(int i = 0; i < leng-1; i++){
        int temp = arr[i+1] - arr[i];
        if( temp > 1){
            isBinary = false;
            break;
        }
    }

    if(isBinary){
        cout << "yes";
    }
    else cout << "no";

    return 0;
}
