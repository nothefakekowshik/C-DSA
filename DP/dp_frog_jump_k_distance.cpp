//the frog can jump K distances in this question, in the frog_jump_dp.cpp the frog can only jump 1 or 2 steps.

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
using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int helper(int n,int k ,vector<int> &dp , vector<int> &height)
{
	if(n==0)
	{
		return 0;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	int curr=INT_MAX;
	for(int i=1;i<=k;i++)
	{
		if(n-i >= 0)
		{
			int temp=helper(n-i,k,dp,height) + abs(height[n] - height[n-i]);
			curr=min(temp,curr);
		}
	}
	dp[n]=curr;
	return dp[n];
}
int main()
{
	init_code();
	vector<int> height{30,10,60 , 10 , 60 , 50};
	int n=height.size();
	int k=2;
	vector<int> dp(n,-1);
	cout<<endl;
	cout<<helper(n-1,k,dp,height);
	cout<<endl;
	pve(dp);
	return 0;
}