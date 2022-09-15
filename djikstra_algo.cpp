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
	int n=5,m=6,source=1;
	vector<pair<int,int> > g[n+1]; 	// assuming 1 based indexing of graph
	// Constructing the graph
	g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});	
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;

	vector<int> distances(n+1,INT_MAX);
	distances[source]=0;
	pq.push({0,source});
	while(!pq.empty())
	{
		int top_distance = pq.top().first;
		int top_node = pq.top().second;
		pq.pop();
		for(auto curr : g[top_node])
		{
			//cout<<curr.first<<" "<<curr.second; node, weight
			int curr_distance = curr.second;
			int curr_node = curr.first;
			if(distances[curr_node] > distances[top_node] + curr_distance)
			{
				distances[curr_node] = distances[top_node] + curr_distance;
				pq.push({distances[curr_node] , curr_node});
			}
		}
	}
	pve(distances);
	return 0;
}