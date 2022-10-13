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
	vector<int> a ={ 12, 1, 78, 90, 57, 89, 56};
	int k=3;
	deque<int> q(k);
	for(int i=0;i<k;i++)
	{
		while(!q.empty() and a[i] >= a[q.front()])
		{
			q.pop_front();
		}
		q.push_front(i);
	}
	for(int i=k;i<a.size();i++)
	{
		cout<<a[q.back()]<<" ";
		while(!q.empty() and q.back() <= i-k)
		{
			q.pop_back();
		}
		while(!q.empty() and a[i] > a[q.front()])
		{
			q.pop_front();
		}
		q.push_front(i);
	}
	cout<<a[q.back()];
	return 0;
}


/* 
	
	TC :  N 
	SC : K

*/