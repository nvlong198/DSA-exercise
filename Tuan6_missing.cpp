#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int m;
	cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	queue<int> aq;
	queue<int> bq;

	for (int i = 0; i < n; i++) {
		aq.push(a[i]);
	}
	for (int i = 0; i < m; i++) {
		bq.push(b[i]);
	}
	int tmp;

	for (int i = 0; i < m; i++) {
		if( tmp == bq.front() ){
			bq.pop();
		}
		else if( (aq.front() != bq.front()) ){
			cout << bq.front() << " ";
			tmp = bq.front();
			bq.pop();
		}
		else if( aq.front() == bq.front() ){
			aq.pop();
			bq.pop();
		}
	}
	return 0;
}

