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
static bool helper(pair<int,int> & a, pair<int,int> & b)
    {
        if(a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
int main()
{
	init_code();
	vi nums = {1,1,2,2,3,3,3,4};
	int k=2;

	nums= {1,1,1,2,2,3};
	k=2;
	unordered_map<int,int> hm;
    for(auto i : nums)
    {
        hm[i]+=1;
    }
    vector<pair<int,int>> ve (hm.begin(),hm.end());
    sort(ve.begin(),ve.end(),helper);
    vector<int> ans;
    int i=0;
    while(k--)
    {
        ans.push_back(ve[i].first);
        i+=1;
    }
    pve(ans);
	return 0;
}