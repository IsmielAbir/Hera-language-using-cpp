#include <bits/stdc++.h>
using namespace std;

const int N =1e5;
int visited[N];
vector<int>adj_list[N];

void DFS(int Node){
    cout<<Node<<endl;
    visited[Node]=1;
    for(int adj_node:adj_list[Node]){
        if(visited[adj_node]==0){
            DFS(adj_node);
        }
    }
}