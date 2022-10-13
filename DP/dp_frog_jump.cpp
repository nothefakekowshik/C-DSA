
// Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair.
// At a time the frog can climb either one or two steps.
// A height[N] array is also given. Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j])
// We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.



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
int helper(int n, vector<int> &dp,vector<int> &height)
{
	if(n==0)
	{
		return 0;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	int farjump=INT_MAX;
	if(n > 1)
	{
		farjump = helper(n-2,dp,height) + abs(height[n] - height[n-2]);
	}
	int nearjump = helper(n-1,dp,height) + abs(height[n] - height[n-1]);
	dp[n]=min(farjump,nearjump);
	return dp[n];
}
int main()
{
	init_code();
	vector<int> height{30,10,60 , 10 , 60 , 50};
	int n=height.size();
	vector<int> dp(n,-1);
	cout<<helper(n-1,dp,height);
	cout<<endl;
	pve(dp);
	return 0;
}