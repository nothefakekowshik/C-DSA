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
#define pi(a,b) pair<int,int> pi 
using namespace std;
 
void init()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void rotateHelper(vector<int> nums, int low, int high) {
	pve(nums);
	cout<<endl;
    while(low < high) {
         int temp = nums[low];
         nums[low] = nums[high];
         nums[high] = temp;
         low+=1;
         high-=1;
    }
}
int main()
{
	init();
	ri(n);
	ri(k);
	vi nums;
	vi queries;
	while(n--) {
		ri(x);
		nums.push_back(x);
	}
	while(k--) {
		ri(x);
		queries.push_back(x);
	}
	vector<vector<int>> ans;
	vector<int> temp(nums.begin(), nums.end());
    for(auto it : queries) {
        it = it % (nums.size()-1);
        rotateHelper(temp,0,it-1);
        rotateHelper(temp,it,nums.size()-1);
        rotateHelper(temp,0,nums.size()-1);
        ans.push_back(temp);
        temp = nums;
    }
    for(auto it : ans) {
    	pve(it);
    	cout<<endl;
    }
	return 0;
}

