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
using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void helper(int n,vector<int> &dp)
{
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]%mod+dp[i-2]%mod;
	}
}
int main()
{
	init_code();
	read(t);
	while(t-->0)
	{
		int n;
		cin>>n;
		vector<int> dp(n+1,-1);
		helper(n,dp);
		cout<<dp[n]%mod;
		cout<<endl;
	}
	return 0;
}