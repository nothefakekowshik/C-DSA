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
	priority_queue<int> max_heap;
	priority_queue<int,vector<int>, greater<int> > min_heap;
	vector<int> ve = {5,1,2,3,4,9,6,8,7};
	for(auto i : ve)
	{
		min_heap.push(i);
	}
	for(auto i : ve)
	{
		max_heap.push(i);
	}
	while(!min_heap.empty())
	{
		cout<<min_heap.top()<<" ";
		min_heap.pop();
	}
	cout<<endl;
	cout<<endl;
	while(!max_heap.empty())
	{
		cout<<max_heap.top()<<" ";
		max_heap.pop();
	}
	cout<<endl;
	cout<<endl;
	priority_queue<int> max_heapn;
	for(auto i :ve)
	{
		max_heapn.push(i*-1);
	}
	priority_queue<int> curr(max_heapn);
	while(!curr.empty())
	{
		cout<<curr.top()*-1<<" ";
		curr.pop();
	}
	cout<<endl;
	cout<<endl;

	priority_queue<pair<int,int>> maxx;
	for(int i=0;i<ve.size();i++)
	{
		maxx.push({ve[i]*-1,i});
	}
	priority_queue<pair<int,int>> current(maxx);
	while(current.empty()==false)
	{
		cout<<current.top().first*-1<<" "<<current.top().second<<" ";
		current.pop();
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	return 0;
}

//Note: By default, C++ creates a max-heap for priority queue.