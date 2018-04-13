#include <iostream>
#include <algorithm>

using namespace std;

struct haiXau{
    string s;
    string t;
};

int main(){
    int n;
    cin >> n;
    haiXau hai_xau[n];
    for(int i = 0; i < n; i++){
        cin >> hai_xau[i].s >> hai_xau[i].t;
        sort(hai_xau[i].s.begin(), hai_xau[i].s.end());
        sort(hai_xau[i].t.begin(), hai_xau[i].t.end());
        if( hai_xau[i].s == hai_xau[i].t ){
            cout << "yes";
        }else{
            cout << "no";
        }
    }

return 0;
}
