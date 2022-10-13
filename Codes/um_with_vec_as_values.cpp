#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
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
	


	unordered_map<int,vector<vector<int>>> m;
	vector<int> v ={1,2,3,4};
	vector<int> ve={5,6,7,8};
	vector<vector<int>> temp;
	m[1].push_back(v);
	m[1].push_back(ve);
	cout<<m.size();
	cout<<endl;
    for(auto i: m) 
    {
    	cout<<i.first<<"-> ";
        for( auto j: i.second) 
        {
            for (auto k: j) 
            {
                cout << k <<" ";
            }
            cout << endl;
        }
    }
	return 0;
}