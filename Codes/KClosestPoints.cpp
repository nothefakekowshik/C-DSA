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
struct helper 
{
    bool operator()(pair<int, int>&a, pair<int, int>&b)
    {
        return a.second > b.second;
    }
};
// bool helper(pair<int,int> &a ,pair<int,int> & b)
// {
// 	return a.second > b.second;
// }
int main()
{
	init_code();
	vector<vector<int>> v={{1,3},{2,2}};
	int k=1;
	priority_queue<pair<int,int>> pq;
	pq.push({10,0});
	pq.push({11,1});
	pq.push({9,2});
	while(!pq.empty())
	{
		cout<<pq.top().first<<" "<<pq.top().second;
		cout<<endl;
		pq.pop();
	}
	cout<<endl;
	cout<<endl;
	cout<<"///////////////////////////////"<<endl;
	priority_queue<pair<int, int> , vector<pair<int, int>> , helper > pq1;
	pq1.push({10,0});
	pq1.push({11,1});
	pq1.push({9,2});
	while(!pq1.empty())
	{
		cout<<pq1.top().first<<" "<<pq1.top().second;
		cout<<endl;
		pq1.pop();
	}
	return 0;
}



// class Solution 
// {
// public:
//     int distance(int a,int b) 
//     {
//         return a*a + b*b;
//     }
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
//     {
//         vector<vector<int>> ans;
//         priority_queue<pair<int,vector<int>>> pq;
//         for(auto it : points)
//         {
//             pq.push({distance(it[0],it[1]) , it});
//         }
//         int total_size=pq.size();
//         while(!pq.empty() and total_size > k)
//         {
//             total_size-=1;
//             pq.pop();
//         }
//         while(!pq.empty())
//         {
//             auto i=pq.top().second;
//             ans.push_back(i);
//             pq.pop();
//         }
//         return ans;
//     }
// };