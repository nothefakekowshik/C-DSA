#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
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
bool helper(pair<string,int> a, pair < string ,int> b)
{
	return a.second > b.second;
}

int main()
{
	init_code();
	vector<string>names={"hello","nice","ok","hello","hello","cpp","py","cpp"} ;
	pve(names);
	cout<<endl;
	unordered_map<string,int> mp;
	for(auto i:names)
	{
		mp[i]+=1;
	}
	for(auto i:mp)
	{
		cout<<i.first<<"->"<<i.second<<endl;
	}
	cout<<endl;
	vector<pair<string,int>> keys;
	for(auto i : mp)
	{
		keys.push_back(i);
	}
	for(auto i : keys)
	{
		cout<<i.first<<"-->"<<i.second<<endl;
	}
	cout<<endl;
	sort(keys.begin() , keys.end() , helper);
	for(auto i : keys)
	{
		cout<<i.first<<"->"<<i.second<<endl;
	}
	cout<<endl;
	cout<<endl;
	return 0;
}