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

int main()
{
	init_code();
	unordered_map<string,vector<string> > um;
	vs s = {"eat","tea","tan","ate","nat","bat"};
	for(auto i:s)
	{
		string temp = i;
		sort(all(temp));
		um[temp].push_back(i);
	}
	vector<vector<string>> ans;
	for(auto i:um)
	{
		ans.push_back(i.second);
	}
	// for(auto i : ans)
	// {
	// 	for(auto j:i)
	// 	{
	// 		c(j);
	// 	}
	// 	cout<<endl;
	// }
	//return ans;
	return 0;
}


