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
void helper(int ind,vector<int>& ve,int s,int sum,int arr[],int n)
{
	if(ind==n)
	{
		if(s==sum)
		{
			pve(ve);
			cout<<endl;
		}
		return;
	}
	ve.push_back(arr[ind]);
	s+=arr[ind];
	helper(ind+1,ve,s,sum,arr,n);
	
	s-=arr[ind];
	ve.pop_back();

	helper(ind+1,ve,s,sum,arr,n);
}
int main()
{
	init_code();
	int arr[]={5,12,3,17,1,18,15,3,17};
	int k=6;
	int n=10;
	// int arr[]={1,2,1};
	// int k=2;
	// int n=3;
	vector<int> ve;
	helper(0,ve,0,k,arr,n);
	return 0;
}