#include<iostream>
#include <list>

using namespace std;
    int** adj;
    bool* visited;
    int highestVertex;
    int counter = 0;

void BFS(int v){
    if(!visited[v]){
        list <int> gqueue;
        gqueue.push_back(v);
        visited[v] = true;
        while(!gqueue.empty()){
            v = gqueue.front();
            gqueue.pop_front();
            for(int i = 1; i <= highestVertex; i++){
                if( adj[v][i] == 1 && visited[i] == false){
                    visited[i] = true;
                    gqueue.push_back(i);
                }
            }

        }
        counter++;
    }
}
int main(){
    int n, m;

    cin >> highestVertex;
    adj = new int*[highestVertex];
    visited = new bool[highestVertex];
    for(int i = 0; i < highestVertex; ++i)
        adj[i] = new int[highestVertex];


    for(int i = 0; i < highestVertex; i++){
        for(int j = 0; j < highestVertex; j++){
            cin >> adj[i][j];
            }
    }
    for(int i = 0; i < highestVertex; i++){
        if(!visited[i]){
            BFS(i);
        }
    }
    cout << counter;

return 0;
}
/*
4
1 1 0 0
1 1 1 0
0 1 1 0
0 0 0 1
*/
