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
	int t;
	cin>>t;
	while(t-->0)
	{
		ri(n);
		ri(m);
		int middle_col=m/2;
		int ans=0;
		if(m%2==1)
		{
			middle_col+=1;
			if(n==1 or m==1)
			{
				ans=n+(m - middle_col) * 2;
				cout<<ans;
			}
			else
			{
				ans=n+(m - middle_col) * 4;

				cout<<ans-2;
			}
		}
		else
		{

		}
		cout<<endl;

	}
	return 0;
}