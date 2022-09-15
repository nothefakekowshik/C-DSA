#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

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
	rs(s);
	rs(t);
    int n=s.size();
    int m=t.size();
	vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0 || i==0)
            {
                dp[i][j]=0;
            }
            else if(s[i-1]==t[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i][j-1] , dp[i-1][j]);
            }
        }   
    }
    c(dp[s.size()][t.size()]);
    cout<<endl;
	for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing LCS
    int i=s.size();
    int j=t.size();
    string ans="";
    while(i > 0 and j > 0)
    {
        cout<<i<<" "<<j<<endl;
        if(s[i-1]==t[j-1])
        {
            ans+=s[i-1];
            i-=1;
            j-=1;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i-=1;
        }
        else
        {
            j-=1;
        }
    }
    cout<<ans;
	return 0;
}