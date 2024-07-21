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
	ri(q);
	vi arr;
	f(0,n){
		ri(a);
		arr.push_back(a);
	}
	vl ps(n);
	fill(ps.begin(), ps.end(),0);
	ps[0] = arr[0];
	f(1,n) {
		ps[i] = ps[i-1] + arr[i];
	}
	pve(ps);
	cout<<endl;
	while(q--) {
		ri(l);ri(r);
		l-=1;
		r-=1;
		if(l==0) {
			cout<<ps[r];
		}
		else {
			cout<<ps[r] - ps[l-1];
		}
		cout<<endl;
	}
	cout<<endl;
	bool a = INT_MAX > 999911141;
	cout<<a;
	return 0;
}
