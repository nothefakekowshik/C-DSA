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
	vector<int> a={36,17,15,8,21,42,37 };
	//a={2,4,3,8};
	sort(all(a));
	int n = a.size();
	vector<int> dp(n,1);
	vector<int> parents(n,0);
	for(int i=0;i<n;i++)
	{
		parents[i]=i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i] % a[j] ==0)
			{
				if(dp[i] < dp[j] + 1)
				{
					dp[i]=dp[j]+1;
					parents[i]=j;
				}
			}
		}
	}
	int max_index=-1;
	int max_val= INT_MIN;
	for(auto i = 0; i < n;i++)
	{
		if(max_val < dp[i])
		{
			max_val=dp[i];
			max_index=i;
		}
	}
	pve(a);
	cout<<endl;
	pve(dp);
	cout<<endl;
	pve(parents);
	cout<<endl;
	cout<<"length is "<<*max_element(all(dp));
	cout<<endl;
	vector<int> ans;
	ans.push_back(a[max_index]);
	while(max_index > 0)
	{
		max_index=parents[max_index];
		ans.push_back(a[max_index]);
	}
	pve(ans);
	cout<<endl;
	return 0;
}