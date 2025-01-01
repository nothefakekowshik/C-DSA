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
int gcdHelper(int a,int b) {
	if(a==0) {
		return b;
	}
	if(b==0){
		return a;
	}
	if(a==b) {
		return a;
	}
	if(a > b) {
		return gcdHelper(a-b,b);
	}
	return gcdHelper(a,b-a);
}
int main()
{
	init();
	ri(t);
	while(t--) {
		ri(x);
		int gcd = INT_MIN;
		int ans = 0;
		for(int i =1;i<x;i++) {
			if(gcd < gcdHelper(x,i) + i) {
				gcd = gcdHelper(x,i) + i;
				ans = i;
			}
		}
		cout<<ans;
		cout<<endl;
	}
	return 0;
}
