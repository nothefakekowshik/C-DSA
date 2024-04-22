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
	rs(s);
	stringstream ss(s);
	string num;
	vector<int> ve;
	while(!ss.eof()) {
		getline(ss,num,'+');
		ve.push_back(stoi(num));
	}
	sort(all(ve));
	string ans="";
	for(auto it : ve) {
		ans += to_string(it);
		ans += "+";
	}
	//ans[ans.size()-1]='';
	ans.erase(ans.size()-1);
	cout<<ans;
	// cout<<endl;
	// cout<<ans.substr(0,ans.size()-1);
	// cout<<endl;
	// cout<<ans;
	return 0;
}

/*

https://codeforces.com/problemset/problem/339/A

1+1+1+3+1 -> 1+1+1+1+3
3+2+1 -> 1+2+3

*/