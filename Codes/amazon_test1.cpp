// Given 2 arrays A1, A2 and a element X. Select a element from array A1 and another element from A2 , perform the sum operation between 2 elements which is close to the given element X. Return the difference between X and sum of the elements.
// Example:
// A1=[4,1]
// A2=[40,10,30,20]
// X=32
// OUTPUT : 1
// The elements are [1 , 30]

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
	vi a={4,1};
	vi b={40,10,30,20};
	int x=32;
	// 1 4
	// 10 20 30 40
	sort(all(a));
	sort(all(b));
	int i=0;
	int j=b.size()-1;
	int ans = INT_MAX;
	while(i < a.size() and j < b.size())
	{
		int sum=a[i]+b[j];
		ans= min(ans,abs(sum-x));
		if(sum < x)
		{
			i+=1;
		}
		else
		{
			j-=1;
		}
	}
	c(ans);
	return 0;
}