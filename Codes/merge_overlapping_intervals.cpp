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
#define max(X,Y) ((X) > (Y) ? (X) : (Y));

using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

bool helper(vector<int> a,vector<int> b)
{
	return a[1] > b[1];
}

int main()
{
	init_code();
	vector<vector<int>> intervals={ { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	sort(intervals.begin(),intervals.end());
	for(auto i : intervals)
	{
		cout<<i[0]<<" "<<i[1];
		cout<<endl;
	}
	cout<<endl;
	stack<pair<int,int>> st;
	st.push({intervals[0][0] , intervals[0][1]});
	cout<<st.top().first<<" "<<st.top().second;
	cout<<endl;
	cout<<endl;
	for(int i=1;i<intervals.size();i++)
	{
		if(st.top().first <= intervals[i][0] and intervals[i][0] <= st.top().second)
		{
			st.top().second = max(intervals[i][1], st.top().second);
		}
		else
		{
			st.push({intervals[i][0] , intervals[i][1]});
		}
	}
	vector<vector<int>>ans;
	while(!st.empty())
	{
		vector<int>temp;
		temp.push_back(st.top().first);
		temp.push_back(st.top().second);
		ans.push_back(temp);
		st.pop();
	}
	for(auto i : ans)
	{
		cout<<i[0]<<" "<<i[1]<<endl;
	}
	return 0;
}
