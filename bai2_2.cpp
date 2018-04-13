#include <iostream>
#include <algorithm>
using namespace std;

struct heo{
	int h;
	int vt;
};

bool sosanh (heo a,heo b){
	if(a.h == b.h)
		return a.vt < b.vt;
	else
		return a.h > b.h;
}

int main(){
    int n, t;
    cin >> n >> t;
    heo *a = new heo[n];
    for(int i = 0 ; i < n; i++){
		cin >> a[i].h;
		a[i].vt = i;
	}
    sort(a,a+n,sosanh);

    cout << a[t-1].vt+1 ;


return 0;
}
