#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    bool *haveWifi = new bool[n];
    haveWifi[0] = true;
    int router = 1;

    for( int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int distance1, distance2, sum = 0;
    sort(arr, arr+n);

    for(int i = 1 ; i < n ; i++){
        distance1 = arr[i] - arr[i-1];
        sum += distance1;
        if( distance1 > k && haveWifi[i-1]){
            router++;
            sum=0;
            haveWifi[i] = true;
        }
        if( (distance1 <= k) && haveWifi[i-1] && !haveWifi[i] && (sum <= 2*k) ) {
            haveWifi[i] = true;
        }
        if ( (distance1 <= k) && !haveWifi[i-1] && !haveWifi[i] && (sum <= 2*k) ){
            router++;
            haveWifi[i-1] = true;
            haveWifi[i] = true;

        }
        if( ( !haveWifi[i] && sum > (2*k) ) ){
            sum = 0;
            router++;
            haveWifi[i] = true;
        }

    }


    cout << router;
return 0;
}
/*
5 1
1 2 3 4 5
*/
