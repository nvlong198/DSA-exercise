#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrimeNumber(int n)
{
     if (n<2) return false;
     int temp=(int)sqrt(n);
     for (int i=2;i<=temp;i++)
       if (n%i==0) return false;
     return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int arrPrime[n];
    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(isPrimeNumber(a[i])){
            arrPrime[count] = a[i];
            count++;
        }
    }

    sort(arrPrime,arrPrime+count);

    count = 0;

    for(int i = 0; i < n; i++){

        if(isPrimeNumber(a[i])){
            a[i]=arrPrime[count];
            count++;
        }
    }

    for(int i = 0; i < n ; i++) {
        cout << a[i] << "\t";
    }
    return 0;
}
