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
int main()
{
	init();
	vector<int> ve = {1,2,3,7,5};
	int n = ve.size();
	long target = 12;
	long long curr_sum = 0;
	int low = 0;
	for(int i=0;i<n;i++) {
	    curr_sum += ve[i];
	    while(curr_sum > target and low < i) {
	        curr_sum -= ve[low];
	        low+=1;
	    }
	    if(curr_sum == target) {
	        return {low+1,i+1};
	    }
	}
	return {-1};

	/*
		 int l=0,r=0;
        long long sum=0;

        while(r<n){
            sum+=arr[r];

            if(sum==s) return {l+1,r+1};

            while(sum>s && l<r){
                sum-=arr[l];
                l++;
                if(sum==s) return {l+1,r+1};
            }
            
            r++;
        }

        return {-1};
        
	*/
}
