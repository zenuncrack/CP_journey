#include <bits/stdc++.h>
using namespace std;
#define flash                     \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;
int cnt;
int mx = -(INT_MAX), nod;
int vis[10001], dis[10001];
vector<int>v[10001];
void bfs(int node)
{

	queue<int> q;
	q.push(node);
	vis[node] = 1;
	dis[node] = 0;
	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		for (int child : v[curr])
		{
			if (vis[child] == 0)
			{
				dis[child] = dis[curr] + 1;
				vis[child] = 1;
				q.push(child);
			}
		}
	}
}
bool dfs(int node)
{
	vis[node] = 1;
	for (int child : v[node])
	{
		if (vis[child] == 0)
		{
			if (dfs(child) == true)
			{
				return true;
				cnt++;
			}
		}
		else
		{
			if (vis[child] == 1)
			{
				cnt++;
				return true;
			}
		}
	}
	vis[node] = 2;
	return false;
}
int main()
{
	flash;
	int n, m, x, y, i;
	cin >> n >> m;
	while (m--)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bool ans = dfs(1);
	if (ans)
	{
		cout << "cycle exists" << endl;
	}
	else
	{
		cout << "cycle doesn't exists" << endl;
	}
	cout << cnt << endl;
}