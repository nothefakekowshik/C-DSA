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
	ri(t);
	while(t-- > 0) {
		ri(n);
		ri(a);
		ri(b);
		int ans = 0;
		bool val = (b/2 >= a);
		if(val) {
			cout<<n*a;
		}
		else {
			while(n > 1) {
				ans += b;
				n -= 2;
			}
			if(n == 1) {
				ans += a;	
			}
			
			cout<<ans;
		}
		cout<<endl;
	}
	return 0;
}
