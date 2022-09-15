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
int helper(vector<int> a ,int canBuy ,int ind)
{
	if(ind==a.size())
	{
		return 0;
	}
	if(canBuy==1)
	{
		int bought = -a[ind] + helper(a,0,ind+1);
		int notbought = helper(a,1,ind+1);
		return max(bought,notbought);
	}
	else
	{
		int sold = a[ind]+ helper(a,1,ind+1);
		int notSold = helper(a,0,ind+1);
		return max(notSold,sold);
	}
}
int helper_memo(vector<vector<int>> & dp, vector<int> a,int canBuy , int ind)
{
	if(ind==a.size())
	{
		return 0;
	}
	if(dp[ind][canBuy]!=-1)
	{
		return dp[ind][canBuy];
	}
	if(canBuy)
	{
		int bought = -a[ind] + helper_memo(dp,a,0,ind+1);
		int notbought = helper_memo(dp,a,1,ind+1);
		dp[ind][canBuy]=max(bought,notbought);
	}
	else
	{
		int sold = a[ind] + helper_memo(dp,a,1,ind+1);
		int notSold = helper_memo(dp,a,0,ind+1);
		dp[ind][canBuy]=max(sold,notSold);
	}
	return dp[ind][canBuy];
}
void helper_tabu_back(vector<vector<int>>& dp ,vector<int> a)
{

	dp[a.size()][0]=0;
	dp[a.size()][1]=0;
	for(int i = a.size()-1 ; i>=0; i--)
	{
		for(int buy = 0; buy < 2; buy++)
		{
			if(buy==1)
			{
				int bought = -a[i] + dp[i+1][0];
				int notbought = dp[i+1][1];
				dp[i][buy] = max(bought,notbought);
			}
			else
			{
				int sold = a[i] + dp[i+1][1];
				int notSold = dp[i+1][0];
				dp[i][buy] = max(sold ,notSold);
			}
		}
	}
}
int main()
{
	init_code();
	vector<int> a = {7,1,5,3,6,4};
	vector<vector<int>> dp(a.size()+1 , vector<int> (2,-1));
	// cout<<helper(a,1,0);
	// cout<<helper_memo(dp,a,1,0);
	helper_tabu_back(dp,a);
	cout<<endl;
	for(auto i : dp)
	{
		for(auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<dp[0][1];
	return 0;
}