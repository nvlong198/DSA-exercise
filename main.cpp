#include <iostream>     // std::cout
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];


	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int max_arr = arr[0];
	int min_arr = arr[0];


	for (int i = 0; i < n; i++)
    {
      if (arr[i] > max_arr)
        {
          max_arr = arr[i];
        }
      else if (arr[i] < min_arr)
        {
          min_arr = arr[i];
        }
    }

	cout << max_arr <<" " << min_arr;


	return 0;
}
