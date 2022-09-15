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
	return 0;
}
vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        vector<pair<int,pair<int,int>>>m;
       for(int i=0;i<N;i++)
       {
           m.push_back({i+1,{S[i],F[i]}});
       }
       sort(m.begin(),m.end(),comp);
       int prev_end=m[0].second.second;
       vector<int>ans;
       ans.push_back(m[0].first);
       for(int j=1;j<N;j++)
       {
           if(prev_end<m[j].second.first)
           {
               ans.push_back(m[j].first);
               prev_end=m[j].second.second;
           }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }

    static bool comp(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
       {
           if(a.second.second==b.second.second)
           {
               return a.first<b.first;
           }
            return a.second.second<b.second.second;
       }


// N= 6
// S = {1,3,0,5,8,5}
// F = {2,4,6,7,9,9} 
// Output:
// {1,2,4,5}
// Explanation:
// We can attend the 1st meeting from (1 to 2),
// then the 2nd meeting from (3 to 4), then the
// 4th meeting from (5 to 7), and the last meeting
// we can attend is the 5th from (8 to 9). It can
// be shown that this is the maximum number of
// meetings we can attend.