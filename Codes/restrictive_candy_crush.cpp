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
	string s = "geegsforgeeeks";
	int k=2;
	stack<pair<char,int>> st;
    for(auto i : s)
    {
        if(st.empty()==true)
        {
            st.push({i,1});
        }
        else if(st.empty()==false and st.top().first==i)
        {
            st.push({i,st.top().second+1});
        }
        else if(st.empty()==false and st.top().first!=i)
        {
            st.push({i,1});
        }
        if(st.empty()==false and st.top().second >= k)
        {
            char ch = st.top().first;
            while(st.top().first==ch)
            {
                st.pop();
            }
        }
    }
    string ans="";
    while(st.empty()==false)
    {
        ans+=st.top().first;
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
	return 0;
}