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
	string s = "abcabcbb";
	unordered_set<char> visited;
	int i=0;
	int j=0;
	int ans=INT_MIN;
	while(j < s.size())
	{
		if(visited.find(s[j])==visited.end())
		{
			visited.insert(s[j]);
		}
		else
		{
			while(i!=j and s[i]!=s[j])
			{
				visited.erase(s[i]);
				i+=1;
			}
			visited.erase(s[i++]);
			visited.insert(s[j]);
		}
		ans=max(ans,j-i+1);
		j+=1;

	}
	cout<<ans;
	return 0;
}


// "abcabcbb"
// "bbbbb"
// "pwwkew"
/*


hs-> a b c 
i=0
j=3










hs - > p w 
i = 0
j = 2








*/

