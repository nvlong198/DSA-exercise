#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    a[0] = 0;
    b[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n+1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i] == b [j]){
                cout << i << " ";
            }
        }
    }

return 0;
}
