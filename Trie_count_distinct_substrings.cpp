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
struct node
{
	node *links[26];
	bool containsKey(char ch) 
	{
		return (links[ch - 'a'] != NULL);
	}

	node * get(char ch) 
	{
		return links[ch - 'a'];
	}
	void put(char ch, node * n) {
		links[ch - 'a'] = n;
	}
};
int distinctString(string s)
{
	node *crawlerr = new node();
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		node *crawler = crawlerr;
		for(int j=i;j<s.size();j++)
		{
			if(crawler->containsKey(s[j]))
			{
				crawler=crawler->get(s[j]);
			}
			else
			{
				crawler->put(s[j],new node());
				crawler=crawler->get(s[j]);
				cnt+=1;
			}
		}
	}
	return cnt+1; // +1 for empty substring
}
int main()
{
	init_code();
	string s= "ccfdf";
	s="ababa";
	cout<<distinctString(s);
	return 0;
}