/*
Breadth-first search for graph traversal.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> edges[100];

void bfs(int initial){
    queue<int> q;
    int visited[100];
    visited[initial]=1;
    q.push(initial);
    while(!q.empty()){
        int get_front=q.front();
        cout<<get_front<<'\n';
        int get_size=edges[get_front].size();
        for(int i=0;i<get_size;i++){
            int connected=edges[get_front][i];
            if(visited[connected]!=1){
                visited[connected]=1;
                q.push(connected);
            }
        }
        q.pop();
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    bfs(2);
    return 0;
}
