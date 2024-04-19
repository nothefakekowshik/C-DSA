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
	ri(N);
	ri(M);
	ri(s);
	long long ans = 1L;
	if (N % s == 0) {

		// tiles required is N/s
		ans = N / s;
	}
	else {

		// one more tile required
		ans  = (N / s) + 1;
	}

	// if length is divisible by side of square
	if (M % s == 0) {

		// tiles required is M/s
		ans *= M / s;
	}
	else {
		// one more tile required
		ans *= (M / s) + 1;
	}
	cout<<ans;
}

/* 

here, int ans fails because it will over flow when we have this test case
1000000000 1000000000 1
N * M = 1000000000000000000
*/


/*

https://codeforces.com/problemset/problem/1/A

Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.

Examples
inputCopy
6 6 4
outputCopy
4

https://www.geeksforgeeks.org/minimum-number-of-square-tiles-required-to-fill-the-rectangular-floor/

*/