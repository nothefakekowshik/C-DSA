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
	ri(t);
	while(t--) {
		ri(m);ri(n);
		rs(a);rs(b);
		int ans = 0 ;
		int i=0,j=0;
		while (i < m && j < n) {
			if(a[i] == b[j]) {
				ans += 1;
				i+=1;
				j+=1;
			} else {
				j += 1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


/* 

You are given two binary strings a
 and b
. A binary string is a string consisting of the characters '0' and '1'.

Your task is to determine the maximum possible number k
 such that a prefix of string a
 of length k
 is a subsequence of string b
.

A sequence a
 is a subsequence of a sequence b
 if a
 can be obtained from b
 by the deletion of several (possibly, zero or all) elements.

Input
The first line consists of a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and m
 (1≤n,m≤2⋅105
) — the length of string a
 and the length of string b
, respectively.

The second line of each test case contains a binary string a
 of length n
.

The third line of each test case contains a binary string b
 of length m
.

It is guaranteed that the sum of values n
 over all test cases does not exceed 2⋅105
. Similarly, the sum of values m
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single number — the maximum k
, such that the first k
 characters of a
 form a subsequence of b
.

Solution : 
Typical two pointers
*/