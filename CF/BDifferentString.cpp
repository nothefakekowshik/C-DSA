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
	while(t--) {
		rs(s);
		int unique_count = 0;
		set<char> st;
		for(auto it : s) {
			if(st.find(it) == st.end()) {
				st.insert(it);
				unique_count+=1;
			}
		}
		if(unique_count != 1) {
			cout<<"YES";
			cout<<endl;
			cout<<s.substr(1,s.size()-1)<<""<<s.substr(0,1);
		} else {
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
