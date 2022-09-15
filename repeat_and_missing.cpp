#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
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
	read(t);
	while(t-->0)
	{
		read(n);
		vector<int> arr;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			arr.push_back(x);
		}
		pair<int,int> p;
		unordered_map<int,int> um;
	    for(int i=0;i<n;i++)
	    {
	        um[arr[i]]+=1;
	    }
	    for(auto i:um)
	    {
	        if(i.second==2)
	        {
	        	p.second=i.first;
	        }
	    }
	    for(int i=1;i<=n;i++)
	    {
	    	if(um.find(i)==um.end())
	    	{
	    		p.first=i;
	    	}
	    }
	    cout<<p.first<<"|"<<p.second;
	    cout<<endl;
	}
	return 0;
}