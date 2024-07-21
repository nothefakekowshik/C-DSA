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
    freopen("outputstl.txt", "w", stdout);
    #endif 
}
int main()
{
	init();
	return 0;
}

/*

Greedy Xor Problem 

Problem Statement- Given an array A of length n, and we are allowed to the following operation any number of time:

Pick 2 adjacent elements; then remove them and place a single integer with

their bitwise XOR. Note that the length of the array decreases by one.

Determine if it is possible to make all the elements of the resultant array equal by

performing some operations. Number of elements in the resultant array should be atleast 2



Sample Testcase

INPUT
3
2 0 2
OUTPUT
YES


INPUT
2 3 1 10
OUTPUT
NO

*/