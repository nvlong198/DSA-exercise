#include <iostream>
#include <list>

using namespace std;

void printAll(list <long> sasmpleQueue)
{
    list <l> g = sasmpleQueue;
    if (!g.empty())
    {
        cout << g.front();
    }
    cout << '\n';
}

int main() {
	list <long> sasmpleQueue;

	int Q, type;
	long value;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> type;

		switch (type) {
		case 1:
			cin >> value;
			sasmpleQueue.push_back(value);
			break;
		case 2:
			sasmpleQueue.pop_front();
			break;
		case 3:
			printAll( sasmpleQueue );
			break;
		}
	}
	return 0;
}
