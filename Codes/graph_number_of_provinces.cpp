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
class Solution 
{
public:
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        vector<vector<int>> adj(isConnected.size());
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int n=isConnected.size();
        vector<bool> visited(n+1,false);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                cnt+=1;
                queue<int> q;
                visited[i]=true;
                q.push(i);
                while(!q.empty())
                {
                    int temp=q.front();
                    q.pop();
                    for(auto it : adj[temp])
                    {
                        if(visited[it]==false)
                        {
                            visited[it]=true;
                            q.push(it);
                            
                        }
                    }
                }
                
            }
        }
        return cnt;
    
    }
};
int main()
{
	init_code();
    vector<vector<int>> isConnected={{1,1,0},{1,1,0},{0,0,1}};
    Solution obj;
    int ans= obj.findCircleNum(isConnected);
    cout<<ans;
	return 0;
}
