#include<iostream>
#include<bits/stdc++.h>
using namespace std;


const int N= 1e6+2;
bool vis[N];

vector<int>g[N];

void dfs(int node)
{

    vis[node]=1;
    cout<<node<<" ";
   
    for(int child:g[node])
    {
        if(vis[child])
          continue;
        //
        dfs(child);
        //
    }
    //

     


}
int main()
{
    int n,e;
    cin>>n>>e;

    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }
  
    dfs(1);

   




    return 0;
}
