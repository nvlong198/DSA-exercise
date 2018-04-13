#include <iostream>
#include <algorithm>
#define MAX 500

using namespace std;
    int adj[MAX][MAX]; //
    bool visited[MAX]; //
    int highestVertex = 0;

void addEdge(int v1, int v2){
    adj[v1][v2] = 1;
    adj[v2][v1] = 1;
    int max_ = (v1 > v2) ? v1 : v2;
    highestVertex = (max_ > highestVertex) ? max_ : highestVertex;
}

void DFS(int index_visited){

    cout << index_visited << " ";
    visited[index_visited] = true;

    for(int i = 1; i <= highestVertex; i++){
            if( adj[index_visited][i] == 1 && visited[i] == false){
                DFS(i);
            }
    }

}

int main(){
    int n, m;

    cin >> n >> m;
    int v1, v2;

    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        addEdge(v1, v2);
    }
    DFS(1);

return 0;
}
