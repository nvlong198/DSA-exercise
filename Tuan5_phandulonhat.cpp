#include<cmath>
#include<iostream>
using namespace std;

int Maximum_Sum_Subarray(int arr[],int n, int m)	//Overall Time Complexity O(n)
{
	int ans = arr[0];
	int sum = 0;

	for(int i = 1;i < n; ++i){	//Check if all are negative
		ans = max(ans,arr[i])%m;
        if(ans<0)					//if Max < 0 return Max
            return ans;
	}
	ans = 0;
	for(int i = 0 ;i < n; ++i)
	{
		if(sum + arr[i] > 0)
			sum+=arr[i];
		else
			sum  = 0;

		ans = max(ans,sum)%m;
	}
	return ans;
}

int main()
{
	int arr[] = {3,3,9,9,5};
	cout<<Maximum_Sum_Subarray(arr,5,7);
	return 0;
}
