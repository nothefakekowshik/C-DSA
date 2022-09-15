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
bool helper(pair<string,int> a,pair<string,int> b)
{
	return a.second < b.second;
}
int main()
{
	init_code();
	unordered_map<string, int> M;
    M = { { "GfG", 3 },
          { "To", 2 },
          { "Welcome", 1 } };

    vector<pair<string,int>> v;
    for(auto i : M)
    {
    	v.push_back(i);
    }
    sort(v.begin(),v.end(),helper);
    for(auto i : v)
    {
    	cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
	return 0;
}