#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
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
	string s="welcome to     python world";
	int i=0;
	int n = s.length();
	vector<string> ans;
	while(i < s.length())
	{
		while(i < s.length() and s[i]==' ')
		{
			i+=1;
		}
		if(i>=n)
		{
			break;
		}
		int j=i+1;
		while(j < n and s[j]!=' ')
		{
			j+=1;
		}
		string substring = s.substr(i,j-i);
		ans.pb(substring);
		i=j+1;
	}
	string a="";
	reverse(ans.begin(),ans.end());
	for(auto i : ans)
	{
		a+=i;
		a+=" ";
	}
	a.resize(a.length()-1);
	cout<<a;

	return 0;
}