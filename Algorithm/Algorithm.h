#include <bits/stdc++.h>
using namespace std;

const int N =1e5;
int visited[N];
vector<int>adj_list[N];

//DFS 

void DFS(int Node){
    cout<<Node<<endl;
    visited[Node]=1;
    for(int adj_node:adj_list[Node]){
        if(visited[adj_node]==0){
            DFS(adj_node);
        }
    }
}

//BFS

void BFS(int node){
    queue<int>q;
    visited[node]=1;
    q.push(node);
    while(!q.empty()){
        int head=q.front();
        q.pop();
        cout<<head<<" ";
        for(int adj_node:adj_list[head]){
            if(visited[adj_node]==0){
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}