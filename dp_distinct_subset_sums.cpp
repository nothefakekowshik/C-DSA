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
    set<int> s;
    int dp[101][10001];
    int n;
public:
    int rec(int ind, int sum, vector<int>& nums){
        if(ind == n)    {s.insert(sum); return s.size();}
        if(dp[ind][sum] != -1)   return dp[ind][sum];
        int take = rec(ind+1, sum+nums[ind], nums);
        int nontake = rec(ind+1, sum, nums);
        
        return dp[ind][sum] = take + nontake;
    }
	vector<int> DistinctSum(vector<int>nums)
	{
	    // Code here
	    n = nums.size();
	    memset(dp, -1, sizeof(dp));
	    rec(0, 0, nums);
	    vector<int> res;
	    for(auto val: s)    res.push_back(val);
	    return res;
	}
};
int main()
{
	init_code();
	vi nums = {1,2,3};
	Solution ob;
	pve(ob.DistinctSum(nums));
	return 0;
}


// TLE

//  int helper(int ind,vector<int> nums,set<int> & sums,int curr_sum,vector<vector<int>>& dp)
// {
//     if(ind < 0)
//     {
//         sums.insert(curr_sum);
//         return sums.size();
//     }
//     if(dp[ind][curr_sum]!=-1)
//     {
//         return dp[ind][curr_sum];
//     }
//     int take = helper(ind-1,nums,sums,curr_sum+nums[ind],dp);
//     int notake = helper(ind-1,nums,sums,curr_sum,dp);
//     return dp[ind][curr_sum]=take+notake;
// }
// vector<int> DistinctSum(vector<int>nums)
// {
//     int max_sum=0;
//     for(auto i : nums)
//     {
//         max_sum+=i;
//     }
//     set<int> sums;
//     int curr_sum=0;
//     vector<vector<int>> dp(nums.size()+1,vector<int>(max_sum+1,-1));
//     helper(nums.size()-1,nums,sums,curr_sum,dp);
//       vector<int> ans;
// 	   for(auto i : sums)
// 	   {
// 	       ans.push_back(i);
// 	   }
// 	   return ans;
// }


// TLE 

// void helper(int ind,vector<int> nums,set<int> & sums,int curr_sum)
// {
//     if(ind < 0)
//     {
//         sums.insert(curr_sum);
        
//         return;
//     }
//     helper(ind-1,nums,sums,curr_sum+nums[ind]);
//     helper(ind-1,nums,sums,curr_sum);
//     return ;
// }
// vector<int> DistinctSum(vector<int>nums)
// {
//     set<int> sums;
//     int curr_sum=0;
//     helper(nums.size()-1,nums,sums,curr_sum);
//     vector<int> ans;
//    for(auto i : sums)
//    {
//        ans.push_back(i);
//    }
//    return ans;
// }