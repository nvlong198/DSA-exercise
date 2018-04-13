#include <iostream>
#include <stack>

using namespace std;

void printAll(stack <long> sampleStack)
{
    stack <long> g = sampleStack;
    if (!g.empty())
    {
        cout << g.top();
    }
    cout << '\n';
}

int main() {
	stack <long> sampleStack;

	int Q, type;
	long value;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> type;

		switch (type) {
		case 1:
			cin >> value;
			sampleStack.push(value);
			break;
		case 2:
			sampleStack.pop();
			break;
		case 3:
			printAll( sampleStack );
			break;
		}
	}
	return 0;
}

