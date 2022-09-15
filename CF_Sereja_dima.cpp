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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a[i]=temp;
	}
	int low=0;
	int high=n-1;
	int s=0;
	int d=0;
	char prev='d';
	while(low <= high)
	{
		if(a[low] < a[high])
		{
			if(prev=='d')
			{
				s+=a[high];
				prev='s';
			}
			else
			{
				d+=a[high];
				prev='d';
			}
			high-=1;
		}
		else
		{
			if(prev=='d')
			{
				s+=a[low];
				low++;
				prev='s';
			}
			else
			{
				d+=a[low];
				low++;
				prev='d';
			}
		}
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}