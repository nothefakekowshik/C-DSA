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
bool helper(vector<vector<int>> a,int c,int d) {
	int n = a.size();
	for(int i=0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			if(i != 0 && j != 0) {
				if(i+1 < n) {
					cout<<a[i][j]<<" "<<a[i+1][j]<<" ";
					cout<<endl;
					if(a[i][j] != a[i+1][j] - c) {
						return false;
					}
				}
				if(j+1 < n) {
					cout<<a[i][j]<<" "<<a[i][j+1]<<" ";
					cout<<endl;
					if(a[i][j] != a[i][j+1] - d) {
						return false;
					}
				}
			}
			cout<<endl;
			cout<<endl;
		}
	}
	return true;
}
int main()
{
	init();
	ri(t);
	while(t--) {
		ri(n);
		ri(c);
		ri(d);
		vector<vector<int>> arr(n,vector<int>(n,0));
		for(int i =0;i<n;i++) {
			for(int j =0;j<n;j++) {
				ri(x);
				arr[i][j] = x;
			}
		}
		// for(auto it : arr) {
		// 	pve(it);
		// 	cout<<endl;
		// }
		if(helper(arr,c,d)) {
			cout<<"YES";
		}
		else {
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

/*

A progressive square of size n
 is an n×n
 matrix. Maxim chooses three integers a1,1
, c
, and d
 and constructs a progressive square according to the following rules:

ai+1,j=ai,j+c
ai,j+1=ai,j+d
For example, if n=3
, a1,1=1
, c=2
, and d=3
, then the progressive square looks as follows:

⎛⎝⎜1354687911⎞⎠⎟



Example
inputCopy
5
3 2 3
3 9 6 5 7 1 10 4 8
3 2 3
3 9 6 5 7 1 11 4 8
2 100 100
400 300 400 500
3 2 3
3 9 6 6 5 1 11 4 8
4 4 4
15 27 7 19 23 23 11 15 7 3 19 23 11 15 11 15
outputCopy
NO
YES
YES
NO
NO

*/