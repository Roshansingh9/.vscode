#include<iostream>
using namespace std;
#include<vector>
#include<queue>


void bfs( vector<int> adj[],int start,int v){
  int visited[v]={0};
  visited[0]=1;
  queue<int> q;
  q.push(start);
  vector<int>bfs;
  while(!q.empty()){
    int node=q.front();
    q.pop();
    bfs.push_back(node);
    for( auto it:adj[node]){
       if(!visited[it]){
        q.push(it);
        visited[it]=1;
       }
    }
  }
  for(auto it:bfs){
    cout<<bfs[it];
  }

}

int main(){
vector<int> adj[]={
    {2,3,1},{0},{0,4},{0},{2}
};
bfs(adj,0,5);
}