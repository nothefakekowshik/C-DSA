//Given a string str and an integer K, the task is to reduce the string by applying the following operation any number of times until it is no longer possible:

// Input: K = 2, str = “geeksforgeeks” 
// Output: gksforgks 
// Explanation: After removal of both occurrences of the substring “ee”, the string reduces to “gksforgks”.

// Input: K = 3, str = “qddxxxd” 
// Output: q 
// Explanation: 
// Removal of “xxx” modifies the string to “qddd”. 
// Again, removal of “ddd”modifies the string to “q”. 




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
	string s="qddxxxd";
	int k=3;
	stack<pair<char,int>> st;
	for(int i=0;i<s.size();i++)
	{
		if(st.empty())
		{
			st.push({s[i],1});
		}
		else
		{
			if(st.top().first==s[i])
			{
				st.push({s[i] , st.top().second+1});
				if(st.top().second==k)
				{
					int cnt=k;
					while(cnt-- > 0)
					{
						st.pop();
					}
				}
			}
			else
			{
				st.push({s[i],1});
			}
		}
	}
	string ans="";
	while(!st.empty())
	{
		ans+=st.top().first;
		st.pop();
	}
	reverse(all(ans));
	cout<<ans;
	return 0;
}