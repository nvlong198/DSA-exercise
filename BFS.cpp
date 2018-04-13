/*
5
0 1
0 2
1 3
3 4
*/
#include<iostream>
#include <algorithm>
#include <list>
#include <vector>
#define MAX 500

using namespace std;

int highestVertex = 0;
int adj[MAX][MAX];
int sumFromRoot[MAX];

void addEdge(int v1, int v2) {
	adj[v1][v2] = 1;
	adj[v2][v1] = 1;
	int max_ = (v1 > v2) ? v1 : v2;
	highestVertex = (max_ > highestVertex) ? max_ : highestVertex;
}

void BFS(int v) {
	vector<bool> visited(MAX , false) ;
	vector<int> highOfVertex(MAX, 0);
	highOfVertex[v] = 0;

	list <int> gqueue;
	gqueue.push_back(v);
	visited[v] = true;
	int sum = 0;

	while (!gqueue.empty()) {
		int vv = gqueue.front();
		gqueue.pop_front();
		for (int i = 0; i <= highestVertex; i++) {
			if ( adj[vv][i] == 1 && visited[i] == false) {
				visited[i] = true;
				highOfVertex[i] = highOfVertex[vv] + 1;
				//cout << i << ": " << highOfVertex[i] << "\n";

				gqueue.push_back(i);
			}
		}

	}
	for (int i = 0; i <= highestVertex; i++) {
		sum += highOfVertex[i];
	}
	sumFromRoot[v] = sum;
}


struct tmp{
    int giatri;
    int vitri;
};
bool sosanh( tmp tmp_1, tmp tmp_2 ){
    return tmp_2.giatri > tmp_1.giatri;
}


int main() {
	int n;

	cin >> n;
	int v1, v2;

	for (int i = 0; i < n - 1; i++) {
		cin >> v1 >> v2;
		addEdge(v1, v2);
	}
	for (int i = 0; i <= highestVertex; i++) {
		BFS(i);
	}
	struct tmp stt[highestVertex];

    for(int i = 0; i <= highestVertex; i++){
	        stt[i].giatri = sumFromRoot[i];
	        stt[i].vitri = i;
	}
    sort(stt, stt+highestVertex, sosanh);
    int min_ = stt[0].giatri;

    for(int i = 0; i <= highestVertex; i++){
	        if (stt[i].giatri == min_){
                cout << stt[i].vitri << " ";
	        }
	}
	return 0;
}
