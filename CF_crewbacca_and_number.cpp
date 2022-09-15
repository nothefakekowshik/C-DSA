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
    long long int n;
    cin>>n;
    vector<char> v;
    while(n > 0)
    {
        int temp=n%10;
        int invert=9-temp;
        int min_val=min(temp,invert);
        v.push_back((char) min_val);
        n=n/10;
    }
    reverse(all(v));
    if(v[0]=='0' or v[0]=='9')
    {
        v[0]='9';
    }
    string ans="";
    for(auto i : v)
    {
        ans+=to_string(i);
    }
    cout<<ans;
}