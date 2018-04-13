#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int * arr = new int[n*n];
    int leng = n*n;
    cout << leng;

    for(int i = 0; i < leng; i++){
        cin >> arr[i];
    }
    sort(arr, arr+leng);
    cout << arr[k-1];
return 0;
}
