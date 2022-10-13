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
int find_parent(int u,vector<int> parents)
{
	if(u == parents[u])
	{
		return u;
	}
	return parents[u]=find_parent(parents[u] , parents);
}
int main()
{
	init_code();
	int n=6;
	vector<int> parents(8);
	vector<int> rank(8,0);
	for(int i=1;i<8;i++)
	{
		parents[i]=i;
	}
	while(n--)
	{
		int u,v;
		cin>>u>>v;
		int uu = find_parent(u,parents);
		int vv = find_parent(v,parents);
		if(rank[uu]==rank[vv])
		{
			parents[vv]=uu;
			rank[uu]+=1;
		}
		else if(rank[uu] > rank[vv])
		{
			parents[vv]=uu;
		}
		else
		{
			parents[uu]=vv;
		}
		cout<<uu<<" "<<v;
		cout<<endl; 
		pve(parents);
		cout<<endl;
		pve(rank);
		cout<<endl;
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	pve(parents);
	cout<<endl;
	pve(rank);
	cout<<endl;
	cout<<find_parent(2,parents)<<"->"<<find_parent(3,parents);
	return 0;
}