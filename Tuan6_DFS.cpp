#include <iostream>
#include <list>
#include <algorithm>
#define MAX 500

using namespace std;

struct Graph {

    int V;    // đỉnh v
    int adj[MAX][MAX];    // mảng các đỉnh liền kề
    bool *visited;

    void g(int V) {

        this->V = V;
        visited = new bool[MAX];
    };

    void DFSUtil(int v, bool visited[], int m) {
        visited[v] = true;
        cout << v << " ";
        // Tìm các đỉnh liền kề với đỉnh v
        for (int i = 1; i <= m; i++)
                if (visited[i] == false)
                DFSUtil(i, visited);
    };

    void addEdge(int v, int w) {
        adj[v][w] = 1; // thêm đỉnh w vào danh sách của  đỉnh v
        adj[w][v] = 1; // thwm đỉnh v vào danh sách của  đỉnh w
    };
    void DFS(int m) {

        for (int i = 1; i <= m; i++)
            if (visited[i] == false) // nếu chưa thăm
                DFSUtil(i, visited, m); // thăm i};    // duyệt các đỉnh
    };

};


int main() {
    int n, m;
    cin >> n >> m;

    struct Graph g;
    g.g(n);
    int v1, v2;

    for (int i = 0; i < m; i++) {
        cin >> v1 >> v2;
        g.addEdge(v1, v2);
    }

    list<int>::iterator j;
    for (int i = 1; i <= n; i++) {
        g.adj[i].sort();  // sắp xếp các đỉnh - > ưu tiên đỉnh nhỏ hơn
    }

    g.DFS(m);

    return 0;
}

