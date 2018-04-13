#include <iostream>
using namespace std;



void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubble(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     if (swapped == false)
        break;
   }
}

int isPrime (int n){
    bool isPrime = true;

    for(int i = 2; i <= n / 2; ++i)
      {
          if(n % i == 0)
          {
              isPrime = false;
              break;
          }
      }
    return isPrime;
}



int main()
{
    int n;
    cin >> n;
    int a[n];
    int arrPrime[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i]; // nhập từ bàn phím

        if( isPrime( a[i] ) ) // kiểm tra số nt
            arrPrime[count++] = a[i]; // gán vào mảng số nt

    }


    bubble(arrPrime ,  count); // xắp xếp mảng số nt

//sai từ đây
    for(int i = (n-1) ; i >= 0; i--){ // duyệt từ cuối mảng

        if( isPrime( a[i] ) ){
            a[i] = arrPrime[count--];
        }

    }

    for(int i = 0; i < n ; i++){
        cout << a[i] << "\t" << i << "\n" ;
    }
    return 0;
}
