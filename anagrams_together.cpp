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
	vector<string> string_list = {"act","god","cat","dog","tac"};
	map<string,vector<string>> hm;
    for(auto i : string_list)
    {
        string temp = i;
        sort(temp.begin(),temp.end());
        hm[temp].push_back(i);
    }
    vector<vector<string>> ans;
    for(auto i : hm)
    {
        vector<string> tv;
        for(auto j : i.second)
        {
            tv.push_back(j);
        }
        ans.push_back(tv);
    }
    for(auto i : ans)
    {
		for(auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
    }
}