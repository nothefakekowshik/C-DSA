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
int helper(int low,int high,vi a)
{
	int n=a.size();
	while(low < high)
	{
		int mid=low+(high-low)/2;
		if(mid==0)
		{
			return a[0] >= a[1] ? a[0] : a[1];
		}
		if(mid==a.size()-1)
		{
			return max(a[n-1],a[n-2]);
		}
		if(a[mid-1] < a[mid] and a[mid] > a[mid+1])
		{
			return a[mid];
		}
		if(a[mid-1] > a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
int main()
{
	init_code();
	vi a={1,2,1,3,5,6,4};
	int low=0;
	int high=a.size()-1;
	cout<<helper(low,high,a);
	return 0;
}