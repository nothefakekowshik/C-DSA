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
long long int helper(int a[],int n,int sum,vector<vector<int>>& dp,int cnt)
{
	if(sum==0)
	{
		cnt+=1;
		return cnt;
	}
	if(n==0)
	{
		return cnt;
	}
	if(dp[n][sum]!=-1)
	{
		return dp[n][sum]%mod;
	}
	if(a[n-1] > sum)
	{
		dp[n][sum] = helper(a,n-1,sum,dp,cnt)%mod;	
	}
	else
	{
		dp[n][sum] = (helper(a,n-1,sum,dp,cnt) + helper(a,n-1,sum-a[n-1],dp,cnt))%mod;			
	}
	return dp[n][sum]%mod;

}
int main()
{
	init_code();
	ri(n);
	ri(sum);
	int a[n];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[i]=x;
	}
	c(n);c(sum);
	cout<<endl;
	vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
	sort(a,a+n,greater<int>()); // but why should i sort? 

	cout<<helper(a,n,sum,dp,cnt);
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





// Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
//        sum = 10
// Output: 3
// Explanation: {2, 3, 5}, {2, 8}, {10}

// Input: N = 5, arr[] = {1, 2, 3, 4, 5}
//        sum = 10
// Output: 3
// Explanation: {1, 2, 3, 4}, {1, 4, 5}, 
//              {2, 3, 5}


// 10 31
// 9 7 0 3 9 8 6 5 7 6

// Expected : 40