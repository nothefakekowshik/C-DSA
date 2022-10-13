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
	vector<int> a ={15, 27, 14, 38, 63, 55, 46, 65, 85}; 
	int n=a.size();
	vector<int> dp(n,1);
	   int max_val = INT_MIN;
	   for(int i=1;i<n;i++)
	   {
	       for(int j=0;j < i;j++)
	       {
	           if(a[i] > a[j])
	           {
	               dp[i]=max(dp[i] , dp[j]+1);
	           }
	       }
	   }
	   pve(dp);
	   cout<<endl;
	   for(int i=0;i<n;i++)
	   {
	       max_val=max(max_val , dp[i]);
	   }
       cout<<max_val<<endl;
}