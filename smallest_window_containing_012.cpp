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
int main()
{
	init_code();
	string s="01212";
	bool zflag=false;
	bool oflag=false;
	bool tflag=false;
	int zc=0;
	int oc=0;
	int tc=0;
	int i=0;
	int start=0;
	while(i< s.size())
	{
		if(s[i]=='0')
		{
			zc+=1;
			zflag=true
		}
		if(s[i]=='1')
		{
			oc+=1;
			oflag=true;
		}
		if(s[i]=='2')
		{
			tc+=1;
			tflag=true;
		}
		if(zflag and oflag and tflag)
		{
		
		}
	}
	return 0;
}