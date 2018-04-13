#include<iostream>
#include<queue>
#define MAX 500
using namespace std;
int visited[MAX];
int a[MAX][MAX];
int out[MAX];
int run = 0;
struct edge{
int dinh;
int canh;
};
int inputtree(int n, int m){
int max = 0, i;
edge *e = new edge[m];
for(i = 0; i < n; i++)
visited[i] = 0;
for(i = 0; i < m; i++){
cin >> e[i].dinh >> e[i].canh;
a[e[i].dinh][e[i].canh] = a[e[i].canh][e[i].dinh] = 1;
max = (max > e[i].canh)? max:e[i].canh;
}
return max;
}
void dfs(int u, int n ){
out[run] = u;
run++;
visited[u] = 1;
for (int i=1; i<= n; i++ ){
if (a[u][i]== 1 && visited[i]==0) {
dfs(i,n);
}
}
}

int main() {
int n, m, max,count=0,mark;
cin >> n >> m>>mark;
max = inputtree(n, m);
dfs(1, max);
for(int i = 0; i < run;i++){
if(out[i]==mark)
break;
count++;
}
cout << count+1;
return 0;
}a
