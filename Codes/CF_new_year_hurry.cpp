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
	int n,k;
	cin>>n>>k;
	int curr_sum=0;
	int i=1;
	//cout<<curr_sum<<endl;
	int cnt=0;
	while(curr_sum + k <= 240)
	{
		curr_sum+=(5*i);
		if(curr_sum + k <= 240)
		{
			//cout<<curr_sum<<endl;
			cnt++;
		}
		i+=1;
	}
	if(cnt > n)
	{
		cout<<n<<endl;
	}
	else
	{
		cout<<cnt;	
		cout<<endl;
	}
	
	
	
	return 0;
}
