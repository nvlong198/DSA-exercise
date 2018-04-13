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
        cin >> a[i];

        if( isPrime( a[i] ) )
            arrPrime[count++] = a[i];

    }


    bubble(arrPrime ,  count);
    //count = 0;
    //a[3] = arrPrime[1];
    int i = n-1;
    for( i ; i < 0; i--){

        if(isPrime(a[i])){
            a[i] = arrPrime[count--];
        }
    }
/*
    for(int i = 0; i < count ; i++){
        cout << arrPrime[i] << "\t" << i << "\n" ;
    }

    for(int j = (n-1) ; j >= 0; j--){
            cout << a[j] << "\t" << j << "\t" << count << "\n" ;

        if( isPrime( a[j] ) )
            a[j] = arrPrime[count--];

    }
*/
    for(int i = 0; i < n ; i++){
        cout << a[i] << " " ;
    }
}
