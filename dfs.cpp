#include <bits/stdc++.h>

using namespace std;

int mx=999;
int vis[100];
vector<pair<int,int>>g[100];
pair<int,int>cst[100];


void relax(int u, int v, int w)
{
    if (cst[v].second > cst[u].second + w)
    {
        cst[v].second = cst[u].second + w;
        cst[v].first = u;
    }
}

void dfs(int node)
{

    vis[node]=1;
    for(auto child: g[node])
    {
        if(vis[child.first]==0)
        {
            dfs(child.first);
        }
    }
    vis[node]=2;

}

void DAG(int node, int n)
{

    for(int i=1; i<=n; i++)
    {
        if(vis[i]!=2)
        {
            dfs(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == node)
        {
            cst[i].first = 0;
            cst[i].second = 0;
        }
        else
        {
            cst[i].first = 0;
            cst[i].second = mx;
        }
    }

    for (int j=1; j<=n; j++)
    {
        for (auto v : g[j])
            relax(j, v.first, v.second);
    }
}
void path_print(int v){

    if(cst[v].first==0){
        cout<<v<<" ";
        return;
    }
    path_print(cst[v].first);
    cout<<v<<" ";

}

int main()
{
    int n,e;
    cout<<"Enter the numbers of Node:"<<endl;
    cin>>n;
    cout<<"Enter the numbers of Edges:"<<endl;
    cin>>e;
    cout<<"Enter your Data:"<<endl;
    while(e--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back(make_pair(y,w));

    }
    int x;
    cout<<"Enter your source:"<<endl;
    cin>>x;
    DAG(x,n);

    for (int i = 1; i <= n; i++)
    {

        cout << i<<endl;
        cout<< "Path : "<<endl;
        path_print(i);
        cout<<endl;
        cout<<"cost: "<<cst[i].second<<endl;
    }

}