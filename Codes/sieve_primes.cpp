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
		int n=100;
		vector<bool> primes (n+1,false);
		int i=2;
		while(i*i <= n)
		{
			if(primes[i]==false)
			{
				int j=i*i;
				while(j <= n)
				{
					primes[j]=true;
					j+=i;
				}
			}
			i+=1;

		}
		for(i=2;i<primes.size();i++)
		{
			if(primes[i]==false)
			{
				cout<<i<<" ";
			}
		}
	return 0;
}