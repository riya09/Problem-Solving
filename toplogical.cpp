/*Topological sort using depth-first search*/

#include <bits/stdc++.h>
using namespace std;
vector<int> edges[100];
int visited[100];
stack<int> topological;
void dfs(int source){
    visited[source]=1;
    for(int i=0;i<edges[source].size();i++){
        int tmp=edges[source][i];
        if(visited[tmp]==0){ // if not visited run dfs on that node
            dfs(tmp);
        }
    }
    topological.push(source);
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
    }
    dfs(1);
    while(!topological.empty()){
        cout<<topological.top()<<'\n';
        topological.pop();
    }
    return 0;
}
