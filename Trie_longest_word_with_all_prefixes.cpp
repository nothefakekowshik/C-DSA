/*

eg : {'n','ni','nin','ninj','ninga','ninja'}
output : ninja 
ninja's prefixes are 

n 
ni
nin
ninj
ninja
all those prefixes are in array , so ninja is the answer.

*/

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
	bool flag=false;
	void put(char ch ,node *n)
	{
		links[ch-'a']=n;
	}
	node *get(char ch)
	{
		return links[ch-'a'];
	}
	bool containskey(char ch)
	{
		return links[ch-'a']!=NULL;
	}
	void setEnd()
	{
		flag=true;
	}
	bool getEnd()
	{
		return flag;
	}
};
class trie
{

public:
	node *root;
	trie()
	{
		root = new node();
	}

	void insert(string word)
	{
		node *n =root;
		for(int i=0;i<word.size();i++)
		{
			if(!n->containskey(word[i]))
			{
				n->put(word[i],new node());

			}
			n=n->get(word[i]);
		}
		n->setEnd();
	}
	bool search(string word)
	{
		node *n = root;
		for(int i=0;i<word.size();i++)
		{
			if(n->containskey(word[i]))
			{
				n=n->get(word[i]);
			}
			else
			{
				return false;
			}
		}
		return n->getEnd();
	}
	bool isPrefixExists(string word)
	{
		node *crawler = root;
		for(auto i  : word)
		{
			if(crawler->containskey(i))
			{
				crawler=crawler->get(i);
				if(crawler->getEnd()==false)
				{
					return false;
				}
			}
			else
			{  
				return false;
			}
		}
		return true;
	}

};
int main()
{
	init_code();
	string ans="";
	trie t;
	vector<string> words ={"n","nin","ni","ninja","ninj","ninga"};
	//vector<string> words ={"n","nin","ni","ninja","ninj","ninga","ning"};
	for(auto i : words)
	{
		t.insert(i);
	}
	//cout<<t.search("ninja");
	for(auto i : words)
	{
		if(t.isPrefixExists(i))
		{
			if(i.size() > ans.size())
			{
				ans=i;
			}
			else if(i.size() == ans.size())
			{
				ans=min(ans,i);
			}
		}
	}
	cout<<ans;
}