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
	ri(n);
	int cnt = 0;
	int count_negative = 0;
	while(n--) {
		ri(x);
		if(x==0) {
			cnt += 1;
		}
		else if(x < 0) {
			count_negative += 1;
			cnt += abs(x + 1);
		}
		else {
			cnt += abs(x-1);
		}
	}
	if(count_negative & 1) {
		cnt += 2;
	}
	cout<<cnt;
	return 0;
}
/*

-4 -> -3 -2 -1
-1 -> -1
4 -> 3 2 1
*/