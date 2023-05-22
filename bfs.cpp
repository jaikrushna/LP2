#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int vis[N];

vector<int> g[N];



void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node]=1;
    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child:g[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
            }
        }
    }
}

int main()
{

    int n,m;
    cout<<"entet the number of nodes and edges\n";
    cin>>n>>m;


    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }


    bfs(1);


    return 0;
}
