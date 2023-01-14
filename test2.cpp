#include "Algorithm/Algorithm.h"

#include "baseFunction.h"

int main()
{
    
    int v,e,source=0;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    DFS(source);
    return 0;
}