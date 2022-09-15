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
class cache
{
	public :
	list<int> dll;
	unordered_map<int,list<int>::iterator> hm;
	int sizee;
	cache(int  n)
	{
		this->sizee=n;
	}
	void put(int x)
	{
		if(hm.find(x)==hm.end())
		{
			if(dll.size()==this->sizee)
			{
				int last=dll.back();
				dll.pop_back();
				hm.erase(last);
			}
		}
		else
		{
			dll.erase(hm[x]);
		}
		dll.push_front(x);
		hm[x] = dll.begin();
	}
	void display()
	{
		for(auto i : dll)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

};
int main()
{
	init_code();
	cache ch(4);
	ch.put(1);
	ch.put(2);
	ch.put(3);
	ch.put(1);
	ch.put(4);
	ch.put(5);
	c(ch.sizee);
	cout<<endl;
	ch.display();

	return 0;
}