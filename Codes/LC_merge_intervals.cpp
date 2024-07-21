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
#define pi(a,b) pair<int,int> pi 
using namespace std;
 
void init()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool sortingVectorHelper(vector<int> a, vector<int> b) {
	if(a[1] == b[1]) {
		return a[0] < b[0];
	}
	return a[0] < b[0];
}
int main()
{
	init();
	vector<vector<int>> ve = {
		// {1,4},
		// {2,3},

		{1,3},
		{15,4},
		{8,10},
		{2,6},

	};
	for(auto it : ve) {
		pve(it);
		cout<<endl;
	}
	sort(ve.begin(), ve.end());
	cout<<endl;cout<<endl;
	for(auto it : ve) {
		pve(it);
		cout<<endl;
	}

	stack<vector<int>> stk;
	stk.push(ve[0]);
	vector<vector<int>> ans;
	//cout<<stk.top()[0]<< " "<< stk.top()[1];
	int i = 1;
	while(i < ve.size()) {
		auto it = stk.top();
            if(it[1] >= ve[i][0]) {
                stk.top()[1] = max(ve[i][1], it[1]);
            }
            else {
                stk.push(ve[i]);
            }
            i += 1;
	}
	cout<<endl;
	cout<<"STACK"<<endl;
	cout<<endl;
	while(!stk.empty()) {
		cout<<stk.top()[0] << " " << stk.top()[1];
		ans.push_back(stk.top());
		cout<<endl;
		stk.pop();
	}

	reverse(ans.begin(), ans.end());
	cout<<"ANSWER"<<endl;
	for(auto it : ans) {
		pve(it);
		cout<<endl;
	}
	return 0;
}
