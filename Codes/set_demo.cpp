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
	set<int> s;
	set<int,greater<int> > reverse_order;
	vector<int> ve = {5,1,2,0,3,4,9,6,8,7};
	for(auto i : ve)
	{
		reverse_order.insert(i);
		s.insert(i);
	}
	pve(reverse_order);
	cout<<endl;
	pve(s);
	cout<<endl;
	// for(auto i = s.begin(); i!=s.end();i++)
	// {
	// 	cout<<*i<<" ";
	// }
	ve.clear();
	for(auto i : s)
	{
		ve.pb(i);
	}
	cout<<endl;
	pve(ve);
	cout<<endl;
	return 0;
}