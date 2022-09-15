#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool compare(pair<int,int> a,pair<int,int> b)
{
	return a.second < b.second;
}
int main()
{
	init_code();
	map<int,int> um;
	vector<int> v ={5,6,1,1,2,2,2,3,3,4,2,1,5,6,6,6,8,6,6,5,7,1,8,1,6};
	for(auto i: v)
	{
		um[i]+=1;
	}
	for(auto i: um)
	{
		cout<<i.first<<"->"<<i.second<<endl;
	}
	cout<<endl;
	cout<<endl;
	vector<pair<int,int>> ve;
	for(auto i: um)
	{
		ve.push_back(i);
	}
	for(auto i : ve)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	sort(ve.begin(),ve.end(), compare);
	cout<<endl;cout<<endl;cout<<endl;
	for(auto i: um)
	{
		cout<<i.first<<"->"<<i.second<<endl;
	}
	for(auto i : ve)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}