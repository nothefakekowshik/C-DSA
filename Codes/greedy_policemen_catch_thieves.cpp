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
	char arr3[] = { 'P', 'T','T','T', 'T', 'P', 'T', 'T', 'P' };
	int k = 3;
	int n = sizeof(arr3) / sizeof(arr3[0]);
	vector<int> p;
	vector<int> t;
	int ind = 0;
	for(auto it : arr3) {
		if(it=='P') {
			p.push_back(ind++);
		} else {
			t.push_back(ind++);
		}
	}
	pve(p);
	cout<<endl;
	pve(t);
	cout<<endl;
	int ans = 0;
	int tpointer = 0;
	int ppointer = 0;
	while (tpointer < t.size() && ppointer < p.size()) {
		if(abs(t[tpointer] - p[ppointer] <= k)) {
			tpointer += 1;
			ppointer += 1;
			ans+=1;
		}
		else if(t[tpointer] < p[ppointer]) {
			tpointer += 1;
		} else {
			ppointer += 1;
		}
	}
	cout<<ans;
	return 0;
}

/*

Given an array of size n that has the following specs
1. each element in the array contains either a policeman or theif
2. Each P can catch only one T
3. A P cannot catch a T who is more than K units

Max number of T caught?

GFG -> https://www.geeksforgeeks.org/policemen-catch-thieves/



*/