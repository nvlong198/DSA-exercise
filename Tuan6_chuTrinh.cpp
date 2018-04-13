#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    int u[m], v[m];

    for(int i = 0; i < m; i++){
        cin >> u[i] >> v[i];
    }
    for(int i = 0; i < m; i++){
        for(int j = i; j < m; j++){
            if(u[i] == v[j]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

return 0;
}
