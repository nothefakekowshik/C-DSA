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
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=prerequisites.size();
        vector<vector<int>> adj(n,vector<int>());  
        vector<int> indegree(n,0);
        for(auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]+=1;
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            auto curr=q.front();
            cout<<curr<<" ";
            q.pop();
            n-=1;
            for(auto it : adj[curr])
            {
                indegree[it]-=1;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
        cout<<endl;
        return n==0;
    }
};
int main()
{
	init_code();
	vector<vector<int>> prerequisites = {{1,0},{0,1}};
	prerequisites={{1,0}};
	prerequisites={{1,0},{2,0},{3,1},{3,2}};
	// prerequisites={};
	Solution obj;
	bool ans=obj.canFinish(prerequisites.size(),prerequisites);
	cout<<ans;
	return 0;
}