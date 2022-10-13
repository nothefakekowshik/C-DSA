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
	string s = "ADOBECODEBANC";
	string p = "ABC";
	vector<int> freq(256,0);
	int cnt=0;
	int ans=INT_MAX;
	for(auto i : p)
	{
		freq[i]+=1;
		if(freq[i]==1)
		{
			cnt+=1;
		}
	}
	int i=0;
	int j=0;
	while(j < s.size())
	{
		freq[s[j]]-=1;
		if(freq[s[j]]==0)
		{
			cnt-=1;
		}
		if(cnt==0)
		{
			while(cnt==0)
			{
				ans=min(ans,j-i+1);			
				freq[s[i]]+=1;
				if(freq[s[i]]==1)
				{
					ans=min(ans,j-i+1);			
					cnt+=1;
				}
				i+=1;
			}				
		}
		j+=1;
	}
	cout<<ans<<" ";
}
	
