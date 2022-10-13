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
	stack<int> s;
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	stack<int> dup = s;
	while(dup.size() >  0)
	{
		cout<<dup.top()<<" ";
		dup.pop();
	}
	
	cout<<endl;
	return 0;
}