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
void helper(int a[],int ind,vector<int> &temp)
{
	if(ind==0)
	{
		if(temp.empty()==true)
		{
			cout<<"{}"<<endl;
		}
		else
		{
			pve(temp);
			cout<<endl;
		}
	}
	else
	{
		temp.push_back(a[ind-1]);
		helper(a,ind-1,temp);
		temp.pop_back();
		helper(a,ind-1,temp);
	}

}
int main()
{
	init_code();
	int a[]={3,1,2};
	vector<int> temp;
	helper(a,3,temp);
	return 0;
}

// TC : 2 ^ N * N  ( * N for printing the vector when the ind is 0)
// SC : N