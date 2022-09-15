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
	ri(t);
	while(t--)
	{
		vector<int> a;
		ri(n);
		ri(q);
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			int curr_sum=a[i];
			for(int j=i+1;j<n;j++)
			{
				curr_sum+=a[j];
				a.push_back(curr_sum);
			}
		}
		sort(all(a));
		vector<int> prefixsum;
		prefixsum.push_back(a[0]);
		for(int i=1;i<a.size();i++)
		{
			prefixsum.push_back(a[i] + prefixsum[i-1]);
		}
		//1 4 9 10 13 14
		//1 5 14 24 37 51
		pve(prefixsum);
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			if(x==y)
			{
				cout<<a[x-1]<<" ";
			}
			else if(x==1)
			{
				cout<<prefixsum[y-1]<<" ";	
			}
			else
			{
				if(x!=0)
					cout<<prefixsum[y-1] - prefixsum[x-2]<<" ";
			}
		}
		cout<<endl;	
	}
	
	return 0;
}