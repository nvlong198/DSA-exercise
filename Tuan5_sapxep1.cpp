#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

void print(vector<int> arr, int n, int sobichia)
{
    unsigned int opsize = pow(2, n);
    unsigned int sum = 0;
    vector<int> tmp(100, 0);

    for (int counter = 0; counter < opsize-1; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1<<j)))
                sum += arr[j];
        }
        tmp[counter] = sum%sobichia;
    }
    sort(tmp.begin(), tmp.end(), greater<int>() );

    cout << tmp[0];

}

int main(){
    int n, sobichia;
    cin >> n >> sobichia;
    vector<int> arr(100, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    print(arr, n, sobichia);
return 0;
}
