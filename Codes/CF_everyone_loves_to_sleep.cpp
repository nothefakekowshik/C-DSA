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
bool helper(vector<pair<int,int>> a, vector<pair<int,int>> b)
{
	return a.first < b.first;
}
int main()
{
	init_code();
	ri(t);
	while(t--)
	{
		ri(n);
		ri(h);
		ri(m);
		vector<pair<int,int>> alarms;
		bool flag=false;
		while(n--)
		{
			int x;
			int y;
			if(x==h and m==y)
			{
				flag=true;
			}
			cin>>x>>y;
			alarms.push_back({x,y});
		}
		if(flag)
		{
			cout<<"0 0"<<endl;
		}
		else
		{
			sort(all(alarms),helper);
			int x = alarms[0].first;
			int y = alarms[0].second;

		}
	}
	return 0;
}