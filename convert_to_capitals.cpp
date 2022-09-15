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
	string s="print the title and ratings of the movies released in 2012 whose metacritic rating is more than 60 and domestic collections exceed 10 crores";
	string upper="";
	string lower="";
	for(auto i:s)	
	{
		if(i==' ')
		{
			upper+=" ";
		}
		else
		{
			upper+=(char)toupper(i);	
		}
	}
	for(auto i :upper)
	{
		if(i==' ')
		{
			lower+=' ';
		}
		else
		{
			lower+=(char)tolower(i);
		}
	}
	if(lower==s)
	{
		cout<<"lower and s are equal";
		cout<<endl;
	}
	cout<<endl;
	c(upper);
	cout<<endl;
	c(lower);
	cout<<endl;
	c(s);
	return 0;
}