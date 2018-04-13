#include <iostream>
#include <algorithm>
using namespace std;

int sumOfNum(int number){
    int tmp = number;
    int remainder = 0, sum = 0;
    while (tmp != 0)
   {
      remainder = tmp % 10;
      sum       = sum + remainder;
      tmp       = tmp / 10;
   }
   return sum;
}
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubble(int arr[][2], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++) {
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if((arr[j][1] == arr[j+1][1]) && (arr[j][0] > arr[j+1][0])){
                swap(&arr[j][0], &arr[j+1][0]);
                swap(&arr[j][1], &arr[j+1][1]);
                swapped = true;
            }
            else if (arr[j][1] > arr[j+1][1]) {
                swap(&arr[j][0], &arr[j+1][0]);
                swap(&arr[j][1], &arr[j+1][1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n][2];

    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
        arr[i][1] = sumOfNum(arr[i][0]);
    }
    bubble(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i][0] << " ";
    }

return 0;
}
