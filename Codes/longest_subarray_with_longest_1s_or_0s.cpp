/*
	Given a binary array a[] or size N and an integer K, the task is to find the longest subarray consisting of only 1s or only 0s
	when at most K elements can be flipped (i.e change 1 to 0 or 0 to 1).

	Input: a[] = {1, 0, 0, 1, 1, 0, 1}, K = 1.
	Output: 4
	Explanation: Flip element of index 0(0-based index) to 0. 
	Then the maximum subarray with all 0 will be of length 3 [0-2]
	Flip index 5 to 1. The maximum subarray with all 1’s will be of length 4 [3-6] 
	So the maximum of (3, 4) is 4. So the answer is 4 for this test case.


	Input : a[] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1}, K = 2.
	Output : 6
	Explanation: Flip 2-1’s to 0 or 2-0’s to 1. 
	So after flipping element of index 6 and 8 to 1,  
	the maxlength of the subarray consisting of only 1’s is 5 [5 to 9].
	Flip element of index 3 and 5 to 0 then the maxlength 
	of the subarray consisting of only 0’s is 6 [1 to 6] 
	The maximum of both of them is 6. So the answer is 6 for this input. 
*/

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
	vector<int> a={ 1, 0, 0, 1, 0, 1, 0, 1};
	int k=2;
	// find max 0s
	int start=0;
	int end=0;
	int ans=0;
	while(end < a.size())
	{
		if(a[end]==1)
		{
			k-=1;
			while(k==0)
			{
				while(start < a.size() and a[start]==1)
				{
					k+=1;
					start+=1;
				}
			}
		}
		else
		{
			ans=max(ans,end-start+1);
			end+=1;
		}
	}
	cout<<ans;

	return 0;
}