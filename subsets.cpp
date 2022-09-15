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
void helper(int index,vector<int> &nums,vector<int> &temp)
{
	pve(temp);
	cout<<endl;
	for(int i=index;i<nums.size();i++)
	{
		temp.push_back(nums[i]);
		helper(i+1,nums,temp);	
		temp.pop_back();	
	}
	//return;
	
	

}
int main()
{
	init_code();
	vector<int> nums={1,2,2};
	vector<int> temp;
	helper(0,nums,temp);
	return 0;
}