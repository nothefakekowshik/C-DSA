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
#define pi(a,b) pair<int,int> pi 
using namespace std;
 
void init()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main()
{
	init();
	ri(x);
	ri(y);
	ri(n);
	double min = INT_MAX;
	int ax=0,ay=0;
	for(int i = n-1;i>=1;i--) {
		for(int j = 1;j<=i;j++) {
			if(((double) (x/y) - (double) (i/j)) > min) {
				ax=i,ay=j;
				min = ((double) (x/y) - (double) (i/j));
			}
		}
	}
	cout<<to_string(ax)<<"/"<<to_string(ay);
	return 0;
}
