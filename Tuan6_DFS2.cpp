#include <iostream>
#include <list>
#include <algorithm>
#include <stack>

using namespace std;


int main()
{
    int n, m;
	int V;    // No. of vertices
	list<int> adj[300];
	int visited[300];
    cin >> n >> m;
    int v1, v2;

    for (int i = 0; i < m; i++) {
        cin >> v1 >> v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
		visited[v1] = 0;
        visited[v2] = 0;
    }

	for (int i = 1; i <= n; i++) {
		adj[i].sort();
	}

	stack<int> stack;
	stack.push(1);
	int s;
	while (!stack.empty())
	{
		s = stack.top();
		stack.pop();

		if ( visited[1] == 0)
		{
			cout << "1" << " ";
			visited[1] = 1;
		}

		list<int>::reverse_iterator i;
		for (i = adj[s].rbegin(); i != adj[s].rend(); ++i)
			if ( visited[*i]==0 )
				stack.push(*i);
	}
	return 0;
}
