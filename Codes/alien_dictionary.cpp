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
int compare(string s1,string s2)
{
	int len = min(s1.size(),s2.size());
	int i=0;
	while(i < len)
	{
		if(s1[i]!=s2[i])
		{
			return i;
		}
		i+=1;
	}
	return i;
}
int main()
{
	init_code();
	vs words= {"baa", "abcd", "abca", "cab", "cad"};
	int k=4;
	vector<int> adj[k];
	for(int i=0;i<words.size()-1;i++)
	{
		string s1=words[i];
		string s2=words[i+1];
		int ind = compare(s1,s2);
		adj[s1[ind]-'a'].push_back(s2[ind]-'a');
	}
	for(auto i : adj)
	{
		for(auto curr : i)
		{
			cout<<curr<<" ";
		}
		cout<<endl;
	}

	return 0;
}
