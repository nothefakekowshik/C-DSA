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
bool helper(vector<int>& v,int k,int pages)
{
	int curr_sum = 0;
	int students_count = 1;
	for(int i=0;i<v.size();i++)
	{
		if(v[i] > pages)
		{
			return false;
		}
		if(curr_sum + v[i] > pages)
		{
			students_count+=1;
			if(students_count > k)
			{
				return false;
			}
			curr_sum=v[i];
		}
		else
		{
			curr_sum+=v[i];
		}
	}
	return true;
}
int main()
{
	init_code();
	vector<int> v = {12,34,67,90};
	int k=2;
	int low=v.front();
	int high=accumulate(all(v) , 0);
	cout<<high;
	int ans=INT_MAX;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(helper(v,k,mid))
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
			
		}
	}
	cout<<ans;
	return 0;
}