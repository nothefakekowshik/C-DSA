#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int helper(string& s,string& t,int m , int n ,vector<vector<int>>& dp)
{
	if(m==0)
	{
		return 0;
	}
	if(n==0)
	{
		return 0;
	}
	if(dp[m][n]!=-1)
	{
		return dp[m][n];
	}
	if(s[m]==t[n])
	{
		dp[m][n]=1+helper(s,t,m-1,n-1,dp);
	}
	else
	{
		dp[m][n]=max(helper(s,t,m-1,n,dp) , helper(s,t,m,n-1,dp));
	}
	return dp[m][n];
}
int main()
{
	init_code();
	string s="AGGTAB";
	string t="GXTXAYB";
	vector<vector<int>> dp(s.size()+1 , vector<int>(t.size()+1,-1));
	cout<<helper(s,t,s.size()-1, t.size()-1, dp);
	cout<<endl;
	for(auto i : dp)
	{
		for(auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}