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
int main()
{
	init_code();
	vector<int> a={1,5,4,3,2,6,7,0,8,9};
	//a={1,3,5,4,7};
	int n =a.size();
	vector<int> dp(n,1);
	vector<int> count(n,1);
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i] > a[j])
			{
				if(dp[i] < dp[j]+1)
				{
					dp[i]=dp[j]+1;
					count[i]=count[j];
				}
				else if(dp[j]+1==dp[i])
				{
					count[i]+=count[j];
				}
			}
		}
	}
	int max_val = *max_element(all(dp));
	pve(dp);
	cout<<endl;
	pve(count);
	cout<<endl;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(dp[i]==max_val)
		{
			ans+=count[i];
		}
	}
	cout<<ans;
	return 0;
}