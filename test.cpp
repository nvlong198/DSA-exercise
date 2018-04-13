#include <iostream>
using namespace std;



int main(){
	int n;
	bool isCheaper = false;

	cin >> n;
	int tmp1, tmp2;

	for( int i = 0 ; i < n; i++){
		cin >> tmp1 >> tmp2;
		if( tmp2 > tmp1 ){
			isCheaper = true;
		}
	}
	if(isCheaper){
		cout << "YES";
	}
	else if (!isCheaper){
		cout << "NO";
	}
return 0;
}
