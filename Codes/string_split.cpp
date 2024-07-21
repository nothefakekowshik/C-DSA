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
	string str ="Hello#oh#ok";
	stringstream ss(str);
	while(!ss.eof()) {
		string curr;
		getline(ss,curr,'#');
		cout<<curr<<" ";
	}
	/* TC : O(N), SC : O(N) */

	
	void tokenize(string s, string del = " ")
	{
	    int start, end = -1*del.size();
	    do {
	        start = end + del.size();
	        end = s.find(del, start);
	        cout << s.substr(start, end - start) << endl;
	    } while (end != -1);
	}


	cout<<endl;
	bool val = str.find("ok") == string::npos;
	cout<<val;
	return 0;
}
