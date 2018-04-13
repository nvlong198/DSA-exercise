#include <iostream>
#include <algorithm>

using namespace std;

struct arr{
    int int_1, int_2;
};

bool sosanh(arr arr_1, arr arr_2){
    return (arr_1.int_1 < arr_2.int_1) ;
}
int main(){
    int n;
    cin >> n;
    arr *a = new arr[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].int_1 >> a[i].int_2;
    }
    sort(a, a+n, sosanh);

    int min_ = a[0].int_1;
    int max_ = a[0].int_2;

    for(int i = 1; i < n; i++){
        if( a[i].int_1 > max_){
            cout << min_ << " " << max_;
            min_ = a[i].int_1;
            cout << "\n";
        }
        max_ = max(max_, a[i].int_2);
    }
    cout << min_ << " " << max_;
return 0;
}
