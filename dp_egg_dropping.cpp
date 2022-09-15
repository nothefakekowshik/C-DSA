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
int helper(int n,int k)
{
	if(k==1 or k==0)
	{
		return k;
	}
	if(n==1)
	{
		return k;
	}
	int ans=INT_MAX;
	for(int i=1;i<k+1;i++)
	{
		int curr=max(helper(n-1,i-1),helper(n,k-i));
		ans=min(curr,ans);
	}
	return ans+1;
}
int main()
{
	init_code();
	int n=2;
	int k=10;
	vector<vector<int>> dp(n+1,vector<int> (k+1));
	
	return 0;
}
