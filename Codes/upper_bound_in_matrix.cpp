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
	int m[3][3]= { {1,3,5}, {2,6,9}, {3,6,9} };
	int mid = 5;
	int pos=0;
	int r=3;
	for(int i=0;i<r;i++)
	{
		pos+=upper_bound(m[i] , m[i]+3,mid) - m[i]; // count the elements which are less than or equal to the mid;
		cout<<pos<<" ";
	}
	cout<<endl;
	cout<<endl;
	for(int i=0;i<r;i++)
	{
		auto pos = upper_bound(m[i] , m[i]+3,mid); // prints the index
		cout<<*pos<<" ";
	}
	cout<<endl;
	return 0;
}
//  1 2 3 3 5 6 6 9 9