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
	int a[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(a)/sizeof(a[0]);
	int ans=INT_MIN;
	int temp_sum=0;
	for(int i=0;i<n;i++)
	{
		temp_sum+=a[i];
		if(ans < temp_sum)
		{
			ans=temp_sum;
		}
		if(temp_sum < 0)
		{
			temp_sum=0;
		}
	}
	cout<<ans;
	return 0;
}