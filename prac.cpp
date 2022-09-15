#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
#define pve2(v) for(auto i : v) for(auto j : i) cout<<j<<" "; cout<<endl;
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
	int m=2;
	int n=5;
	 vector<vector<int> > dp(m,vector<int>(n,-1));
	 for(auto i: dp)
	 {
	 	for(auto j : i)
	 	{
	 		cout<<j<<" ";
	 	}
	 	cout<<endl;
	 }
	return 0;
}