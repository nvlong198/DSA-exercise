#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    for ( int i = 0; i < n; i++ ){
      for ( int j = 0; j < n; j++ ) {
            cin >> arr[i][j];
      }
    }

    int counter = 0;
    int max_ = 0;

    for ( int i = 0; i < n; i++ ){
      for ( int j = 0; j < n; j++ ) {
            if(arr[i][j] == 1){
                counter ++;
            }
      }
      if(counter > max_){
        max_ = counter;
      }
      counter = 0;
    }

    counter = 0;

    for ( int i = 0; i < n; i++ ){
      for ( int j = 0; j < n; j++ ) {
            if(arr[i][j] == 1){
                counter++;
            }
        }
        if(counter == max_){
            cout << i << "\t";
            break;
        }
        counter = 0;
    }


    return 0;
}
