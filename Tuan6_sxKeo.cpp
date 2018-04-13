#include <iostream>

using namespace std;

int fmax( int a, int b){
    int max_ = (a > b ) ?  a :  b;
    return max_;
}

int main(){
    int m, w, p, n;
    cin >> m >> w >> p >> n;

    int soKeo = m*w;
    int counter = 1;
    int soChia = 0;
    n-=soKeo;

    while(n <= 0){
        soChia = soKeo/p;
        if(soChia > 1){
            n = n + (p*soChia) - fmax( (m+soChia)*w, m*(w+soChia) );
        }
        else n-=soKeo;
        counter++;
    }

    cout << counter;

return 0;
}
