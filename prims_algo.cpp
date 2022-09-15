#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
#define c(x) cout<<x<<" ";
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long>
#define ri(x) int x; cin>>x;
#define rs(x) string x; cin>>x;


using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main()
{
	init_code();
	int n=5;
	int m=6;
	vector<pair<int,int>>  graph[n];
	for(int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		graph[a].push_back({b,wt});
		graph[b].push_back({a,wt});
	}
	vector<int> parents(n,-1);
	vector<bool> visited(n,false);
	vector<int> distances(n,INT_MAX);
	distances[0]=0;
	parents[0]=-1;
	for(int i = 0; i<n;i++)	
	{
		int mini=INT_MAX;
		int u;
		for(int j=0;j<n;j++)
		{
			if(visited[j]==false and distances[j] < mini)
			{
				mini = distances[j];
				u=j;
			}
		}
		visited[u]=true;
		for(auto it : graph[u])
		{
			int v = it.first;
			int weight = it.second;
			if(visited[v]==false and distances[v] > weight)
			{
				parents[v]=u;
				distances[v]=weight;
			}
		}
	}
	pve(distances);
	return 0;
}








